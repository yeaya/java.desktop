#ifndef _javax_swing_JEditorPane$PlainEditorKit_h_
#define _javax_swing_JEditorPane$PlainEditorKit_h_
//$ class javax.swing.JEditorPane$PlainEditorKit
//$ extends javax.swing.text.DefaultEditorKit
//$ implements javax.swing.text.ViewFactory

#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/ViewFactory.h>

namespace javax {
	namespace swing {
		namespace text {
			class Element;
			class View;
		}
	}
}

namespace javax {
	namespace swing {

class $export JEditorPane$PlainEditorKit : public ::javax::swing::text::DefaultEditorKit, public ::javax::swing::text::ViewFactory {
	$class(JEditorPane$PlainEditorKit, $NO_CLASS_INIT, ::javax::swing::text::DefaultEditorKit, ::javax::swing::text::ViewFactory)
public:
	JEditorPane$PlainEditorKit();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::javax::swing::text::View* create(::javax::swing::text::Element* elem) override;
	virtual ::javax::swing::text::View* createI18N(::javax::swing::text::Element* elem);
	virtual ::javax::swing::text::ViewFactory* getViewFactory() override;
	virtual $String* toString() override;
};

	} // swing
} // javax

#endif // _javax_swing_JEditorPane$PlainEditorKit_h_