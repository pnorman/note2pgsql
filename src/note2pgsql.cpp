#include <cstdio>

#include <boost/property_tree/ptree.hpp>
#include <boost/program_options.hpp>

namespace po = boost::program_options;

int main(int argc, char *argv[]) {
  po::options_description desc("Allowed Options");
  desc.add_options()
      ("help", "describe usage")
    ;
    
  po::positional_options_description p;
  p.add("input-file", -1);
  po::variables_map vm;
  po::store(po::command_line_parser(argc, argv).
                  options(desc).positional(p).run(), vm);
  po::notify(vm); 
  
  if (vm.count("help")) {
    std::cout << desc << "\n";
    return 1;
  }
  
  fprintf(stderr, "No code yet\n");
}