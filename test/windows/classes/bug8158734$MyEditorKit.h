#ifndef _bug8158734$MyEditorKit_h_
#define _bug8158734$MyEditorKit_h_
//$ class bug8158734$MyEditorKit
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

class $export bug8158734$MyEditorKit : public ::javax::swing::text::EditorKit {
	$class(bug8158734$MyEditorKit, $NO_CLASS_INIT, ::javax::swing::text::EditorKit)
public:
	bug8158734$MyEditorKit();
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

#endif // _bug8158734$MyEditorKit_h_