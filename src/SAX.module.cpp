#include <Rcpp.h>

namespace TSS { // Short for TimeSeriesSimilarity

  typedef std::vector< int > SymbolVec;

  class SAX {
  public:
    SymbolVec data;
  };
}

using namespace Rcpp;

RCPP_MODULE(SAX) {
  
  class_<TSS::SAX>("SAX") 
  
  .field("data", &TSS::SAX::data, "Symbolic representation")
  
  ;
}