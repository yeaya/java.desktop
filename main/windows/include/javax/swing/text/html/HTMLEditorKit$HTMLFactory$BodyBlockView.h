#ifndef _javax_swing_text_html_HTMLEditorKit$HTMLFactory$BodyBlockView_h_
#define _javax_swing_text_html_HTMLEditorKit$HTMLFactory$BodyBlockView_h_
//$ class javax.swing.text.html.HTMLEditorKit$HTMLFactory$BodyBlockView
//$ extends javax.swing.text.html.BlockView
//$ implements java.awt.event.ComponentListener

#include <java/awt/event/ComponentListener.h>
#include <java/lang/Array.h>
#include <javax/swing/text/html/BlockView.h>

namespace java {
	namespace awt {
		namespace event {
			class ComponentEvent;
		}
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class Reference;
		}
	}
}
namespace javax {
	namespace swing {
		class SizeRequirements;
	}
}
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
		namespace text {
			namespace html {

class $import HTMLEditorKit$HTMLFactory$BodyBlockView : public ::javax::swing::text::html::BlockView, public ::java::awt::event::ComponentListener {
	$class(HTMLEditorKit$HTMLFactory$BodyBlockView, $NO_CLASS_INIT, ::javax::swing::text::html::BlockView, ::java::awt::event::ComponentListener)
public:
	HTMLEditorKit$HTMLFactory$BodyBlockView();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::text::html::BlockView::getViewIndex;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::Element* elem);
	virtual ::javax::swing::SizeRequirements* calculateMajorAxisRequirements(int32_t axis, ::javax::swing::SizeRequirements* r) override;
	virtual void componentHidden(::java::awt::event::ComponentEvent* e) override;
	virtual void componentMoved(::java::awt::event::ComponentEvent* e) override;
	virtual void componentResized(::java::awt::event::ComponentEvent* e) override;
	virtual void componentShown(::java::awt::event::ComponentEvent* e) override;
	virtual void layoutMinorAxis(int32_t targetSpan, int32_t axis, $ints* offsets, $ints* spans) override;
	using ::javax::swing::text::html::BlockView::modelToView;
	virtual void setParent(::javax::swing::text::View* parent) override;
	using ::javax::swing::text::html::BlockView::viewToModel;
	virtual $String* toString() override;
	::java::lang::ref::Reference* cachedViewPort = nullptr;
	bool isListening = false;
	int32_t viewVisibleWidth = 0;
	int32_t componentVisibleWidth = 0;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_HTMLEditorKit$HTMLFactory$BodyBlockView_h_