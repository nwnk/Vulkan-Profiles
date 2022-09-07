#include "generator.hpp"

#include <json/json.h>  // https://github.com/open-source-parsers/jsoncpp

#include <valijson/adapters/jsoncpp_adapter.hpp>
#include <valijson/schema.hpp>
#include <valijson/schema_parser.hpp>
#include <valijson/validation_results.hpp>
#include <valijson/validator.hpp>

using valijson::Schema;
using valijson::SchemaParser;
using valijson::ValidationResults;
using valijson::Validator;
using valijson::adapters::JsonCppAdapter;

int main(int argc, char* argv[]) { 
	return 0; 
}