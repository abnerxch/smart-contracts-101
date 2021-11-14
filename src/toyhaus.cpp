#include <eosio/eosio.hpp>

using namespace eosio;

CONTRACT toyhaus : public contract {
  public:
    using contract::contract;

    ACTION welcome( name arrival ) {
      check( has_auth( name( "toyboss" ) ), "You are not the owner" );
      check( arrival == name( "toyboss" ), "please dont lie" );
      print("Welcome to the toy hause");
    }
    private:
};