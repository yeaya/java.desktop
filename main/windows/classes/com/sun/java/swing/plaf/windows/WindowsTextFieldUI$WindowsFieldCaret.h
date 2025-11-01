#ifndef _com_sun_java_swing_plaf_windows_WindowsTextFieldUI$WindowsFieldCaret_h_
#define _com_sun_java_swing_plaf_windows_WindowsTextFieldUI$WindowsFieldCaret_h_
//$ class com.sun.java.swing.plaf.windows.WindowsTextFieldUI$WindowsFieldCaret
//$ extends javax.swing.text.DefaultCaret
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/text/DefaultCaret.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Highlighter$HighlightPainter;
			class JTextComponent;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsTextFieldUI$WindowsFieldCaret : public ::javax::swing::text::DefaultCaret, public ::javax::swing::plaf::UIResource {
	$class(WindowsTextFieldUI$WindowsFieldCaret, $NO_CLASS_INIT, ::javax::swing::text::DefaultCaret, ::javax::swing::plaf::UIResource)
public:
	WindowsTextFieldUI$WindowsFieldCaret();
	using ::javax::swing::text::DefaultCaret::contains;
	using ::javax::swing::text::DefaultCaret::add;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static ::javax::swing::text::JTextComponent* access$000(::com::sun::java::swing::plaf::windows::WindowsTextFieldUI$WindowsFieldCaret* x0);
	static void access$100(::com::sun::java::swing::plaf::windows::WindowsTextFieldUI$WindowsFieldCaret* x0, ::java::awt::Rectangle* x1);
	virtual void adjustVisibility(::java::awt::Rectangle* r) override;
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

#endif // _com_sun_java_swing_plaf_windows_WindowsTextFieldUI$WindowsFieldCaret_h_