#ifndef _javax_swing_text_AsyncBoxView_h_
#define _javax_swing_text_AsyncBoxView_h_
//$ class javax.swing.text.AsyncBoxView
//$ extends javax.swing.text.View

#include <java/lang/Array.h>
#include <javax/swing/text/View.h>

namespace java {
	namespace awt {
		class Graphics;
		class Shape;
	}
}
namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace util {
		class List;
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
			class AsyncBoxView$ChildLocator;
			class AsyncBoxView$ChildState;
			class Element;
			class LayoutQueue;
			class Position$Bias;
			class ViewFactory;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import AsyncBoxView : public ::javax::swing::text::View {
	$class(AsyncBoxView, $NO_CLASS_INIT, ::javax::swing::text::View)
public:
	AsyncBoxView();
	using ::javax::swing::text::View::getViewIndex;
	void init$(::javax::swing::text::Element* elem, int32_t axis);
	virtual ::javax::swing::text::AsyncBoxView$ChildState* createChildState(::javax::swing::text::View* v);
	virtual void flushRequirementChanges();
	virtual float getBottomInset();
	virtual ::java::awt::Shape* getChildAllocation(int32_t index, ::java::awt::Shape* a) override;
	virtual ::javax::swing::text::AsyncBoxView$ChildState* getChildState(int32_t index);
	virtual bool getEstimatedMajorSpan();
	virtual float getInsetSpan(int32_t axis);
	virtual ::javax::swing::text::LayoutQueue* getLayoutQueue();
	virtual float getLeftInset();
	virtual int32_t getMajorAxis();
	virtual float getMaximumSpan(int32_t axis) override;
	virtual float getMinimumSpan(int32_t axis) override;
	virtual int32_t getMinorAxis();
	virtual int32_t getNextVisualPositionFrom(int32_t pos, ::javax::swing::text::Position$Bias* b, ::java::awt::Shape* a, int32_t direction, $Array<::javax::swing::text::Position$Bias>* biasRet) override;
	virtual float getPreferredSpan(int32_t axis) override;
	virtual float getRightInset();
	virtual float getSpanOnAxis(int32_t axis);
	virtual float getTopInset();
	virtual ::javax::swing::text::View* getView(int32_t n) override;
	virtual int32_t getViewCount() override;
	virtual int32_t getViewIndex(int32_t pos, ::javax::swing::text::Position$Bias* b) override;
	virtual int32_t getViewIndexAtPosition(int32_t pos, ::javax::swing::text::Position$Bias* b);
	virtual void loadChildren(::javax::swing::text::ViewFactory* f);
	virtual void majorRequirementChange(::javax::swing::text::AsyncBoxView$ChildState* cs, float delta);
	virtual void minorRequirementChange(::javax::swing::text::AsyncBoxView$ChildState* cs);
	using ::javax::swing::text::View::modelToView;
	virtual ::java::awt::Shape* modelToView(int32_t pos, ::java::awt::Shape* a, ::javax::swing::text::Position$Bias* b) override;
	virtual void paint(::java::awt::Graphics* g, ::java::awt::Shape* alloc) override;
	virtual void preferenceChanged(::javax::swing::text::View* child, bool width, bool height) override;
	virtual void replace(int32_t offset, int32_t length, $Array<::javax::swing::text::View>* views) override;
	virtual void setBottomInset(float i);
	virtual void setEstimatedMajorSpan(bool isEstimated);
	virtual void setLeftInset(float i);
	virtual void setParent(::javax::swing::text::View* parent) override;
	virtual void setRightInset(float i);
	virtual void setSize(float width, float height) override;
	virtual void setSpanOnAxis(int32_t axis, float span);
	virtual void setTopInset(float i);
	virtual void updateLayout(::javax::swing::event::DocumentEvent$ElementChange* ec, ::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a) override;
	using ::javax::swing::text::View::viewToModel;
	virtual int32_t viewToModel(float x, float y, ::java::awt::Shape* a, $Array<::javax::swing::text::Position$Bias>* biasReturn) override;
	int32_t axis = 0;
	::java::util::List* stats = nullptr;
	float majorSpan = 0.0;
	bool estimatedMajorSpan = false;
	float minorSpan = 0.0;
	::javax::swing::text::AsyncBoxView$ChildLocator* locator = nullptr;
	float topInset = 0.0;
	float bottomInset = 0.0;
	float leftInset = 0.0;
	float rightInset = 0.0;
	::javax::swing::text::AsyncBoxView$ChildState* minRequest = nullptr;
	::javax::swing::text::AsyncBoxView$ChildState* prefRequest = nullptr;
	bool majorChanged = false;
	bool minorChanged = false;
	::java::lang::Runnable* flushTask = nullptr;
	::javax::swing::text::AsyncBoxView$ChildState* changing = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_AsyncBoxView_h_