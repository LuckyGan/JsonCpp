# Jsoncpp源码阅读

## 基础知识

1. C++命名空间。

2. 条件编译。


## Json源码结构

```
jsoncpp-src-0.5.0
├── include
│   └── json
│       ├── autulink.h
│       ├── config.h
│       ├── features.h
│       ├── forwards.h
│       ├── json.h
│       ├── reader.h
│       ├── value.h
│       └── writer.h
├── src
│   └── lib_json
│       ├── json_batchallocator.h
│       ├── json_writer.cpp
│       ├── json_reader.cpp
│       └── json_value.cpp

1. 使用Jsoncpp库时需要引入json.h。
2. 主要需要阅读value.h与value.c、reader.h与reader.c、writer.h与writer.c。
```

## 核心数据结构

1. value.h
```
value.h

```

2. reader.h
```
reader.h
├── c:Reader
│   ├── f:Reader()
│   ├── f:Reader( const Features &features )
│   ├── f:bool parse( const std::string &document, Value &root, bool collectComments = true )
│   ├── f:bool parse( const char *beginDoc, const char *endDoc, Value &root, bool collectComments = true )
│   ├── f:bool parse( std::istream &is, Value &root, bool collectComments = true )
│   ├── f:std::string getFormatedErrorMessages() const
│   ├── f:bool expectToken( TokenType type, Token &token, const char *message )
│   ├── f:bool readToken( Token &token )
│   ├── f:void skipSpaces()
│   ├── f:bool match( Location pattern, int patternLength )
│   ├── f:bool readComment()
│   ├── f:readCStyleComment()
│   ├── f:readCppStyleComment()
│   ├── f:bool readString()
│   ├── f:void readNumber()
│   ├── f:bool readValue()
│   ├── f:bool readObject( Token &token )
│   ├── f:bool readArray( Token &token )
│   ├── f:bool decodeNumber( Token &token )
│   ├── f:bool decodeString( Token &token )
│   ├── f:bool decodeString( Token &token, std::string &decoded )
│   ├── f:bool decodeDouble( Token &token )
│   ├── f:bool decodeUnicodeCodePoint( Token &token, Location &current, Location end, unsigned int &unicode )
│   ├── f:bool decodeUnicodeEscapeSequence( Token &token, Location &current, Location end, unsigned int &unicode )
│   ├── f:bool addError( const std::string &message, Token &token, Location extra = 0 )
│   ├── f:bool recoverFromError( TokenType skipUntilToken )
│   ├── f:bool addErrorAndRecover( const std::string &message, Token &token, TokenType skipUntilToken )
│   ├── f:void skipUntilSpace()
│   ├── f:Value &currentValue()
│   ├── f:Char getNextChar()
│   ├── f:void getLocationLineAndColumn( Location location, int &line, int &column ) const
│   ├── f:std::string getLocationLineAndColumn( Location location ) const
│   ├── f:void addComment( Location begin, Location end, CommentPlacement placement )
│   ├── f:void skipCommentTokens( Token &token )
│   ├── c:Token
│   │   ├── p:TokenType type_
│   │   ├── p:Location start_
│   │   └── P:Location end_
│   ├── c:ErrorInfo
│   │   ├── Token token_
│   │   ├── std::string message_
│   │   └── Location extra_
│   f:std::istream& operator>>( std::istream&, Value& )

```

3. writer.h
```
writer.h
```

## 功能模块