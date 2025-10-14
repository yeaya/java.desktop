#ifndef _bug8058120_h_
#define _bug8058120_h_
//$ class bug8058120
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class HTMLDocument;
			}
		}
	}
}

class $export bug8058120 : public ::java::lang::Object {
	$class(bug8058120, 0, ::java::lang::Object)
public:
	bug8058120();
	void init$();
	static void createAndShowGUI();
	static void main($StringArray* args);
	static ::javax::swing::text::html::HTMLDocument* document;
	static $String* text;
	static $String* textToInsert;
};

#endif // _bug8058120_h_