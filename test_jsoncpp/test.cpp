#include <iostream>
#include <string>
#include "json/json.h"

using namespace std;

int main(){
    Json::Value root;
    Json::FastWriter fast_writer;
    Json::StyledWriter styled_writer;

    // Writer
    root["key_name"] = Json::Value("linwen");
    root["key_school_array"].append("SYSU");
    root["key_school_array"].append("NUIST");
    cout << fast_writer.write(root) << endl;
    cout << endl << styled_writer.write(root) << endl;

    // Reader
    Json::Value value;
    Json::Reader reader;
    string str = "{\"age\":\"25\"}";
    if(reader.parse(str, value)){
        string value_age = value["age"].asString();
        cout << value_age << endl;
        cout << value["age"] << endl;
     } 

    return 0;
}