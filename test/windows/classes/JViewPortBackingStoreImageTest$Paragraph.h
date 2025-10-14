#ifndef _JViewPortBackingStoreImageTest$Paragraph_h_
#define _JViewPortBackingStoreImageTest$Paragraph_h_
//$ class JViewPortBackingStoreImageTest$Paragraph
//$ extends java.lang.Object

#include <java/lang/Array.h>

class JViewPortBackingStoreImageTest$AttributedContent;

class $export JViewPortBackingStoreImageTest$Paragraph : public ::java::lang::Object {
	$class(JViewPortBackingStoreImageTest$Paragraph, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JViewPortBackingStoreImageTest$Paragraph();
	void init$($String* logical, $Array<JViewPortBackingStoreImageTest$AttributedContent>* data);
	$String* logical = nullptr;
	$Array<JViewPortBackingStoreImageTest$AttributedContent>* data = nullptr;
};

#endif // _JViewPortBackingStoreImageTest$Paragraph_h_