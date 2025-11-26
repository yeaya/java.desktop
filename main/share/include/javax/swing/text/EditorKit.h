#ifndef _javax_swing_text_EditorKit_h_
#define _javax_swing_text_EditorKit_h_
//$ class javax.swing.text.EditorKit
//$ extends java.lang.Cloneable
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

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
		class JEditorPane;
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

namespace javax {
	namespace swing {
		namespace text {

class $import EditorKit : public ::java::lang::Cloneable, public ::java::io::Serializable {
	$class(EditorKit, $NO_CLASS_INIT, ::java::lang::Cloneable, ::java::io::Serializable)
public:
	EditorKit();
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $Object* clone() override;
	virtual ::javax::swing::text::Caret* createCaret() {return nullptr;}
	virtual ::javax::swing::text::Document* createDefaultDocument() {return nullptr;}
	virtual void deinstall(::javax::swing::JEditorPane* c);
	virtual $Array<::javax::swing::Action>* getActions() {return nullptr;}
	virtual $String* getContentType() {return nullptr;}
	virtual ::javax::swing::text::ViewFactory* getViewFactory() {return nullptr;}
	virtual void install(::javax::swing::JEditorPane* c);
	virtual void read(::java::io::InputStream* in, ::javax::swing::text::Document* doc, int32_t pos) {}
	virtual void read(::java::io::Reader* in, ::javax::swing::text::Document* doc, int32_t pos) {}
	virtual $String* toString() override;
	virtual void write(::java::io::OutputStream* out, ::javax::swing::text::Document* doc, int32_t pos, int32_t len) {}
	virtual void write(::java::io::Writer* out, ::javax::swing::text::Document* doc, int32_t pos, int32_t len) {}
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_EditorKit_h_