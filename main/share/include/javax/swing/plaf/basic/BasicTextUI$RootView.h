#ifndef _javax_swing_plaf_basic_BasicTextUI$RootView_h_
#define _javax_swing_plaf_basic_BasicTextUI$RootView_h_
//$ class javax.swing.plaf.basic.BasicTextUI$RootView
//$ extends javax.swing.text.View

#include <java/lang/Array.h>
#include <javax/swing/text/View.h>

namespace java {
	namespace awt {
		class Container;
		class Graphics;
		class Shape;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class DocumentEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicTextUI;
			}
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class Document;
			class Element;
			class Position$Bias;
			class ViewFactory;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicTextUI$RootView : public ::javax::swing::text::View {
	$class(BasicTextUI$RootView, $NO_CLASS_INIT, ::javax::swing::text::View)
public:
	BasicTextUI$RootView();
	using ::javax::swing::text::View::breakView;
	using ::javax::swing::text::View::getViewIndex;
	void init$(::javax::swing::plaf::basic::BasicTextUI* this$0);
	virtual ::javax::swing::text::View* breakView(int32_t axis, float len, ::java::awt::Shape* a);
	virtual void changedUpdate(::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual float getAlignment(int32_t axis) override;
	virtual ::javax::swing::text::AttributeSet* getAttributes() override;
	virtual ::java::awt::Shape* getChildAllocation(int32_t index, ::java::awt::Shape* a) override;
	virtual ::java::awt::Container* getContainer() override;
	virtual ::javax::swing::text::Document* getDocument() override;
	virtual ::javax::swing::text::Element* getElement() override;
	virtual int32_t getEndOffset() override;
	virtual float getMaximumSpan(int32_t axis) override;
	virtual float getMinimumSpan(int32_t axis) override;
	virtual int32_t getNextVisualPositionFrom(int32_t pos, ::javax::swing::text::Position$Bias* b, ::java::awt::Shape* a, int32_t direction, $Array<::javax::swing::text::Position$Bias>* biasRet) override;
	virtual float getPreferredSpan(int32_t axis) override;
	virtual int32_t getResizeWeight(int32_t axis) override;
	virtual int32_t getStartOffset() override;
	virtual ::javax::swing::text::View* getView(int32_t n) override;
	virtual int32_t getViewCount() override;
	virtual ::javax::swing::text::ViewFactory* getViewFactory() override;
	virtual int32_t getViewIndex(int32_t pos, ::javax::swing::text::Position$Bias* b) override;
	virtual void insertUpdate(::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	using ::javax::swing::text::View::modelToView;
	virtual ::java::awt::Shape* modelToView(int32_t pos, ::java::awt::Shape* a, ::javax::swing::text::Position$Bias* b) override;
	virtual ::java::awt::Shape* modelToView(int32_t p0, ::javax::swing::text::Position$Bias* b0, int32_t p1, ::javax::swing::text::Position$Bias* b1, ::java::awt::Shape* a) override;
	virtual void paint(::java::awt::Graphics* g, ::java::awt::Shape* allocation) override;
	virtual void preferenceChanged(::javax::swing::text::View* child, bool width, bool height) override;
	virtual void removeUpdate(::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual void setParent(::javax::swing::text::View* parent) override;
	virtual void setSize(float width, float height) override;
	virtual void setView(::javax::swing::text::View* v);
	using ::javax::swing::text::View::viewToModel;
	virtual int32_t viewToModel(float x, float y, ::java::awt::Shape* a, $Array<::javax::swing::text::Position$Bias>* bias) override;
	::javax::swing::plaf::basic::BasicTextUI* this$0 = nullptr;
	::javax::swing::text::View* view = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTextUI$RootView_h_