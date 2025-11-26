#ifndef _CodeBugEditorKit_h_
#define _CodeBugEditorKit_h_
//$ class CodeBugEditorKit
//$ extends javax.swing.text.StyledEditorKit

#include <javax/swing/text/StyledEditorKit.h>

namespace javax {
	namespace swing {
		namespace text {
			class Document;
			class ViewFactory;
		}
	}
}

class CodeBugEditorKit : public ::javax::swing::text::StyledEditorKit {
	$class(CodeBugEditorKit, $NO_CLASS_INIT, ::javax::swing::text::StyledEditorKit)
public:
	CodeBugEditorKit();
	void init$();
	virtual ::javax::swing::text::Document* createDefaultDocument() override;
	virtual ::javax::swing::text::ViewFactory* getViewFactory() override;
	::javax::swing::text::ViewFactory* defaultFactory = nullptr;
};

#endif // _CodeBugEditorKit_h_