#ifndef _javax_swing_text_html_FrameView$FrameEditorPane_h_
#define _javax_swing_text_html_FrameView$FrameEditorPane_h_
//$ class javax.swing.text.html.FrameView$FrameEditorPane
//$ extends javax.swing.JEditorPane
//$ implements sun.swing.text.html.FrameEditorPaneTag

#include <javax/swing/JEditorPane.h>
#include <sun/swing/text/html/FrameEditorPaneTag.h>

namespace javax {
	namespace swing {
		namespace text {
			class EditorKit;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class FrameView;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class FrameView$FrameEditorPane : public ::javax::swing::JEditorPane, public ::sun::swing::text::html::FrameEditorPaneTag {
	$class(FrameView$FrameEditorPane, $NO_CLASS_INIT, ::javax::swing::JEditorPane, ::sun::swing::text::html::FrameEditorPaneTag)
public:
	FrameView$FrameEditorPane();
	using ::javax::swing::JEditorPane::getText;
	using ::javax::swing::JEditorPane::getToolTipText;
	using ::javax::swing::JEditorPane::contains;
	using ::javax::swing::JEditorPane::enable;
	using ::javax::swing::JEditorPane::getBounds;
	using ::javax::swing::JEditorPane::getSize;
	using ::javax::swing::JEditorPane::getLocation;
	using ::javax::swing::JEditorPane::firePropertyChange;
	using ::javax::swing::JEditorPane::add;
	using ::javax::swing::JEditorPane::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::html::FrameView* this$0);
	virtual ::javax::swing::text::EditorKit* getEditorKitForContentType($String* type) override;
	virtual ::javax::swing::text::html::FrameView* getFrameView();
	using ::javax::swing::JEditorPane::read;
	using ::javax::swing::JEditorPane::setUI;
	using ::javax::swing::JEditorPane::print;
	using ::javax::swing::JEditorPane::requestFocus;
	using ::javax::swing::JEditorPane::requestFocusInWindow;
	using ::javax::swing::JEditorPane::repaint;
	using ::javax::swing::JEditorPane::remove;
	using ::javax::swing::JEditorPane::list;
	virtual $String* toString() override;
	::javax::swing::text::html::FrameView* this$0 = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_FrameView$FrameEditorPane_h_