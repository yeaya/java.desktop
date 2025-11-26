#ifndef _bug8031109_h_
#define _bug8031109_h_
//$ class bug8031109
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TEXT_HTML")
#undef TEXT_HTML

namespace java {
	namespace net {
		class URL;
	}
}

class $export bug8031109 : public ::java::lang::Object {
	$class(bug8031109, 0, ::java::lang::Object)
public:
	bug8031109();
	void init$();
	static ::java::net::URL* generateHtmlFile();
	static void main($StringArray* args);
	static $String* TEXT_HTML;
};

#pragma pop_macro("TEXT_HTML")

#endif // _bug8031109_h_