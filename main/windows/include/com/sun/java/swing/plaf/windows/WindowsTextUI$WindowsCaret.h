#ifndef _com_sun_java_swing_plaf_windows_WindowsTextUI$WindowsCaret_h_
#define _com_sun_java_swing_plaf_windows_WindowsTextUI$WindowsCaret_h_
//$ class com.sun.java.swing.plaf.windows.WindowsTextUI$WindowsCaret
//$ extends javax.swing.text.DefaultCaret
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/text/DefaultCaret.h>

namespace javax {
	namespace swing {
		namespace text {
			class Highlighter$HighlightPainter;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsTextUI$WindowsCaret : public ::javax::swing::text::DefaultCaret, public ::javax::swing::plaf::UIResource {
	$class(WindowsTextUI$WindowsCaret, $NO_CLASS_INIT, ::javax::swing::text::DefaultCaret, ::javax::swing::plaf::UIResource)
public:
	WindowsTextUI$WindowsCaret();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::text::DefaultCaret::contains;
	using ::javax::swing::text::DefaultCaret::add;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::javax::swing::text::Highlighter$HighlightPainter* getSelectionPainter() override;
	using ::javax::swing::text::DefaultCaret::setRect;
	using ::javax::swing::text::DefaultCaret::intersects;
	using ::javax::swing::text::DefaultCaret::outcode;
	using ::javax::swing::text::DefaultCaret::setFrame;
	virtual $String* toString() override;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsTextUI$WindowsCaret_h_