#ifndef _CodeBugDocument_h_
#define _CodeBugDocument_h_
//$ class CodeBugDocument
//$ extends javax.swing.text.DefaultStyledDocument

#include <javax/swing/text/DefaultStyledDocument.h>

#pragma push_macro("ELEMENT_TABLE")
#undef ELEMENT_TABLE
#pragma push_macro("ELEMENT_TD")
#undef ELEMENT_TD
#pragma push_macro("ELEMENT_TR")
#undef ELEMENT_TR

namespace java {
	namespace util {
		class ArrayList;
	}
}

class CodeBugDocument : public ::javax::swing::text::DefaultStyledDocument {
	$class(CodeBugDocument, 0, ::javax::swing::text::DefaultStyledDocument)
public:
	CodeBugDocument();
	void init$();
	virtual void fillCellSpecs(::java::util::ArrayList* Specs, int32_t colCount);
	virtual void fillRowSpecs(::java::util::ArrayList* Specs, int32_t rowCount, int32_t colCount);
	virtual void insertTable(int32_t offset, int32_t rowCount, int32_t colCount);
	static $String* ELEMENT_TABLE;
	static $String* ELEMENT_TR;
	static $String* ELEMENT_TD;
};

#pragma pop_macro("ELEMENT_TABLE")
#pragma pop_macro("ELEMENT_TD")
#pragma pop_macro("ELEMENT_TR")

#endif // _CodeBugDocument_h_