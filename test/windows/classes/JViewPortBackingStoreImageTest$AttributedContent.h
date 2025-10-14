#ifndef _JViewPortBackingStoreImageTest$AttributedContent_h_
#define _JViewPortBackingStoreImageTest$AttributedContent_h_
//$ class JViewPortBackingStoreImageTest$AttributedContent
//$ extends java.lang.Object

#include <java/lang/Object.h>

class $export JViewPortBackingStoreImageTest$AttributedContent : public ::java::lang::Object {
	$class(JViewPortBackingStoreImageTest$AttributedContent, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JViewPortBackingStoreImageTest$AttributedContent();
	void init$($String* attr, $String* content);
	$String* attr = nullptr;
	$String* content = nullptr;
};

#endif // _JViewPortBackingStoreImageTest$AttributedContent_h_