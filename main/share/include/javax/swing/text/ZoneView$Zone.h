#ifndef _javax_swing_text_ZoneView$Zone_h_
#define _javax_swing_text_ZoneView$Zone_h_
//$ class javax.swing.text.ZoneView$Zone
//$ extends javax.swing.text.AsyncBoxView

#include <java/lang/Array.h>
#include <javax/swing/text/AsyncBoxView.h>

namespace java {
	namespace awt {
		class Graphics;
		class Shape;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class DocumentEvent;
			class DocumentEvent$ElementChange;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class Element;
			class Position;
			class Position$Bias;
			class ViewFactory;
			class ZoneView;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import ZoneView$Zone : public ::javax::swing::text::AsyncBoxView {
	$class(ZoneView$Zone, $NO_CLASS_INIT, ::javax::swing::text::AsyncBoxView)
public:
	ZoneView$Zone();
	using ::javax::swing::text::AsyncBoxView::getViewIndex;
	void init$(::javax::swing::text::ZoneView* this$0, ::javax::swing::text::Element* elem, ::javax::swing::text::Position* start, ::javax::swing::text::Position* end);
	virtual void changedUpdate(::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual void flushRequirementChanges() override;
	virtual ::javax::swing::text::AttributeSet* getAttributes() override;
	virtual int32_t getEndOffset() override;
	virtual int32_t getStartOffset() override;
	virtual int32_t getViewIndex(int32_t pos, ::javax::swing::text::Position$Bias* b) override;
	virtual void insertUpdate(::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual bool isLoaded();
	virtual void load();
	virtual void loadChildren(::javax::swing::text::ViewFactory* f) override;
	using ::javax::swing::text::AsyncBoxView::modelToView;
	virtual ::java::awt::Shape* modelToView(int32_t pos, ::java::awt::Shape* a, ::javax::swing::text::Position$Bias* b) override;
	virtual void paint(::java::awt::Graphics* g, ::java::awt::Shape* a) override;
	virtual void removeUpdate(::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual void unload();
	virtual bool updateChildren(::javax::swing::event::DocumentEvent$ElementChange* ec, ::javax::swing::event::DocumentEvent* e, ::javax::swing::text::ViewFactory* f) override;
	using ::javax::swing::text::AsyncBoxView::viewToModel;
	virtual int32_t viewToModel(float x, float y, ::java::awt::Shape* a, $Array<::javax::swing::text::Position$Bias>* bias) override;
	::javax::swing::text::ZoneView* this$0 = nullptr;
	::javax::swing::text::Position* start = nullptr;
	::javax::swing::text::Position* end = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_ZoneView$Zone_h_