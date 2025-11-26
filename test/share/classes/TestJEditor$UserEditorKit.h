#ifndef _TestJEditor$UserEditorKit_h_
#define _TestJEditor$UserEditorKit_h_
//$ class TestJEditor$UserEditorKit
//$ extends javax.swing.text.EditorKit

#include <java/lang/Array.h>
#include <javax/swing/text/EditorKit.h>

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
		class Reader;
		class Writer;
	}
}
namespace javax {
	namespace swing {
		class Action;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Caret;
			class Document;
			class ViewFactory;
		}
	}
}

class $export TestJEditor$UserEditorKit : public ::javax::swing::text::EditorKit {
	$class(TestJEditor$UserEditorKit, $NO_CLASS_INIT, ::javax::swing::text::EditorKit)
public:
	TestJEditor$UserEditorKit();
	void init$();
	virtual ::javax::swing::text::Caret* createCaret() override;
	virtual ::javax::swing::text::Document* createDefaultDocument() override;
	virtual $Array<::javax::swing::Action>* getActions() override;
	virtual $String* getContentType() override;
	virtual ::javax::swing::text::ViewFactory* getViewFactory() override;
	virtual void read(::java::io::InputStream* in, ::javax::swing::text::Document* doc, int32_t pos) override;
	virtual void read(::java::io::Reader* in, ::javax::swing::text::Document* doc, int32_t pos) override;
	virtual void write(::java::io::OutputStream* out, ::javax::swing::text::Document* doc, int32_t pos, int32_t len) override;
	virtual void write(::java::io::Writer* out, ::javax::swing::text::Document* doc, int32_t pos, int32_t len) override;
};

#endif // _TestJEditor$UserEditorKit_h_