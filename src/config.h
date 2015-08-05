#ifndef JUCI_CONFIG_H_
#define JUCI_CONFIG_H_
#include <boost/property_tree/json_parser.hpp>
#include <boost/property_tree/xml_parser.hpp>
#include "menu.h"

class MainConfig {
public:
  MainConfig(Menu &menu);
  void find_or_create_config_files();
  void PrintMenu();
  void GenerateSource();
  void GenerateKeybindings();
  void GenerateDirectoryFilter();
private:
  boost::property_tree::ptree cfg;
  boost::property_tree::ptree key_tree;
  Menu &menu;
};
#endif
