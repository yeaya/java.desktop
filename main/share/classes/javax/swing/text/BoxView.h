#ifndef _javax_swing_text_BoxView_h_
#define _javax_swing_text_BoxView_h_
//$ class javax.swing.text.BoxView
//$ extends javax.swing.text.CompositeView

#include <java/lang/Array.h>
#include <javax/swing/text/CompositeView.h>

namespace java {
	namespace awt {
		class Graphics;
		class Rectangle;
		class Shape;
	}
}
namespace javax {
	namespace swing {
		class SizeRequirements;
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
			class Element;
			class Position$Bias;
			class View;
			class ViewFactory;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export BoxView : public ::javax::swing::text::CompositeView {
	$class(BoxView, $NO_CLASS_INIT, ::javax::swing::text::CompositeView)
public:
	BoxView();
	using ::javax::swing::text::CompositeView::getViewIndex;
	void init$(::javax::swing::text::Element* elem, int32_t axis);
	virtual void baselineLayout(int32_t targetSpan, int32_t axis, $ints* offsets, $ints* spans);
	virtual ::javax::swing::SizeRequirements* baselineRequirements(int32_t axis, ::javax::swing::SizeRequirements* r);
	virtual ::javax::swing::SizeRequirements* calculateMajorAxisRequirements(int32_t axis, ::javax::swing::SizeRequirements* r);
	virtual ::javax::swing::SizeRequirements* calculateMinorAxisRequirements(int32_t axis, ::javax::swing::SizeRequirements* r);
	virtual void checkRequests(int32_t axis);
	virtual void childAllocation(int32_t index, ::java::awt::Rectangle* alloc) override;
	virtual bool flipEastAndWestAtEnds(int32_t position, ::javax::swing::text::Position$Bias* bias) override;
	virtual void forwardUpdate(::javax::swing::event::DocumentEvent$ElementChange* ec, ::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual float getAlignment(int32_t axis) override;
	virtual int32_t getAxis();
	virtual ::java::awt::Shape* getChildAllocation(int32_t index, ::java::awt::Shape* a) override;
	virtual int32_t getHeight();
	virtual float getMaximumSpan(int32_t axis) override;
	virtual float getMinimumSpan(int32_t axis) override;
	virtual int32_t getOffset(int32_t axis, int32_t childIndex);
	virtual float getPreferredSpan(int32_t axis) override;
	virtual int32_t getResizeWeight(int32_t axis) override;
	virtual int32_t getSpan(int32_t axis, int32_t childIndex);
	virtual float getSpanOnAxis(int32_t axis);
	virtual ::javax::swing::text::View* getViewAtPoint(int32_t x, int32_t y, ::java::awt::Rectangle* alloc) override;
	virtual int32_t getWidth();
	virtual bool isAfter(int32_t x, int32_t y, ::java::awt::Rectangle* innerAlloc) override;
	virtual bool isAllocationValid();
	virtual bool isBefore(int32_t x, int32_t y, ::java::awt::Rectangle* innerAlloc) override;
	virtual bool isLayoutValid(int32_t axis);
	virtual void layout(int32_t width, int32_t height);
	virtual void layoutChanged(int32_t axis);
	virtual void layoutMajorAxis(int32_t targetSpan, int32_t axis, $ints* offsets, $ints* spans);
	virtual void layoutMinorAxis(int32_t targetSpan, int32_t axis, $ints* offsets, $ints* spans);
	using ::javax::swing::text::CompositeView::modelToView;
	virtual ::java::awt::Shape* modelToView(int32_t pos, ::java::awt::Shape* a, ::javax::swing::text::Position$Bias* b) override;
	virtual void paint(::java::awt::Graphics* g, ::java::awt::Shape* allocation) override;
	virtual void paintChild(::java::awt::Graphics* g, ::java::awt::Rectangle* alloc, int32_t index);
	virtual void preferenceChanged(::javax::swing::text::View* child, bool width, bool height) override;
	virtual void replace(int32_t index, int32_t length, $Array<::javax::swing::text::View>* elems) override;
	virtual void setAxis(int32_t axis);
	virtual void setSize(float width, float height) override;
	virtual void setSpanOnAxis(int32_t axis, float span);
	virtual void updateChildSizes();
	virtual $ints* updateLayoutArray($ints* oldArray, int32_t offset, int32_t nInserted);
	using ::javax::swing::text::CompositeView::viewToModel;
	virtual int32_t viewToModel(float x, float y, ::java::awt::Shape* a, $Array<::javax::swing::text::Position$Bias>* bias) override;
	int32_t majorAxis = 0;
	int32_t majorSpan = 0;
	int32_t minorSpan = 0;
	bool majorReqValid = false;
	bool minorReqValid = false;
	::javax::swing::SizeRequirements* majorRequest = nullptr;
	::javax::swing::SizeRequirements* minorRequest = nullptr;
	bool majorAllocValid = false;
	$ints* majorOffsets = nullptr;
	$ints* majorSpans = nullptr;
	bool minorAllocValid = false;
	$ints* minorOffsets = nullptr;
	$ints* minorSpans = nullptr;
	::java::awt::Rectangle* tempRect = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_BoxView_h_