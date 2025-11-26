#ifndef _javax_swing_text_CompositeView_h_
#define _javax_swing_text_CompositeView_h_
//$ class javax.swing.text.CompositeView
//$ extends javax.swing.text.View

#include <java/lang/Array.h>
#include <javax/swing/text/View.h>

#pragma push_macro("ZERO")
#undef ZERO

namespace java {
	namespace awt {
		class Rectangle;
		class Shape;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class Element;
			class Position$Bias;
			class ViewFactory;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import CompositeView : public ::javax::swing::text::View {
	$class(CompositeView, 0, ::javax::swing::text::View)
public:
	CompositeView();
	using ::javax::swing::text::View::getViewIndex;
	void init$(::javax::swing::text::Element* elem);
	virtual void childAllocation(int32_t index, ::java::awt::Rectangle* a) {}
	virtual bool flipEastAndWestAtEnds(int32_t position, ::javax::swing::text::Position$Bias* bias);
	virtual int16_t getBottomInset();
	virtual ::java::awt::Shape* getChildAllocation(int32_t index, ::java::awt::Shape* a) override;
	virtual ::java::awt::Rectangle* getInsideAllocation(::java::awt::Shape* a);
	virtual int16_t getLeftInset();
	virtual int32_t getNextEastWestVisualPositionFrom(int32_t pos, ::javax::swing::text::Position$Bias* b, ::java::awt::Shape* a, int32_t direction, $Array<::javax::swing::text::Position$Bias>* biasRet);
	virtual int32_t getNextNorthSouthVisualPositionFrom(int32_t pos, ::javax::swing::text::Position$Bias* b, ::java::awt::Shape* a, int32_t direction, $Array<::javax::swing::text::Position$Bias>* biasRet);
	virtual int32_t getNextVisualPositionFrom(int32_t pos, ::javax::swing::text::Position$Bias* b, ::java::awt::Shape* a, int32_t direction, $Array<::javax::swing::text::Position$Bias>* biasRet) override;
	virtual int16_t getRightInset();
	virtual int16_t getTopInset();
	virtual ::javax::swing::text::View* getView(int32_t n) override;
	virtual ::javax::swing::text::View* getViewAtPoint(int32_t x, int32_t y, ::java::awt::Rectangle* alloc) {return nullptr;}
	virtual ::javax::swing::text::View* getViewAtPosition(int32_t pos, ::java::awt::Rectangle* a);
	virtual int32_t getViewCount() override;
	virtual int32_t getViewIndex(int32_t pos, ::javax::swing::text::Position$Bias* b) override;
	virtual int32_t getViewIndexAtPosition(int32_t pos);
	virtual bool isAfter(int32_t x, int32_t y, ::java::awt::Rectangle* alloc) {return false;}
	virtual bool isBefore(int32_t x, int32_t y, ::java::awt::Rectangle* alloc) {return false;}
	virtual void loadChildren(::javax::swing::text::ViewFactory* f);
	using ::javax::swing::text::View::modelToView;
	virtual ::java::awt::Shape* modelToView(int32_t pos, ::java::awt::Shape* a, ::javax::swing::text::Position$Bias* b) override;
	virtual ::java::awt::Shape* modelToView(int32_t p0, ::javax::swing::text::Position$Bias* b0, int32_t p1, ::javax::swing::text::Position$Bias* b1, ::java::awt::Shape* a) override;
	virtual void replace(int32_t offset, int32_t length, $Array<::javax::swing::text::View>* views) override;
	virtual void setInsets(int16_t top, int16_t left, int16_t bottom, int16_t right);
	virtual void setParagraphInsets(::javax::swing::text::AttributeSet* attr);
	virtual void setParent(::javax::swing::text::View* parent) override;
	using ::javax::swing::text::View::viewToModel;
	virtual int32_t viewToModel(float x, float y, ::java::awt::Shape* a, $Array<::javax::swing::text::Position$Bias>* bias) override;
	static $Array<::javax::swing::text::View>* ZERO;
	$Array<::javax::swing::text::View>* children = nullptr;
	int32_t nchildren = 0;
	int16_t left = 0;
	int16_t right = 0;
	int16_t top = 0;
	int16_t bottom = 0;
	::java::awt::Rectangle* childAlloc = nullptr;
};

		} // text
	} // swing
} // javax

#pragma pop_macro("ZERO")

#endif // _javax_swing_text_CompositeView_h_