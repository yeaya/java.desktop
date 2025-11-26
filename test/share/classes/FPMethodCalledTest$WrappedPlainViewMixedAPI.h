#ifndef _FPMethodCalledTest$WrappedPlainViewMixedAPI_h_
#define _FPMethodCalledTest$WrappedPlainViewMixedAPI_h_
//$ class FPMethodCalledTest$WrappedPlainViewMixedAPI
//$ extends javax.swing.text.WrappedPlainView
//$ implements FPMethodCalledTest$Resultable

#include <FPMethodCalledTest$Resultable.h>
#include <javax/swing/text/WrappedPlainView.h>

namespace java {
	namespace awt {
		class Graphics;
		class Graphics2D;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Element;
		}
	}
}

class $export FPMethodCalledTest$WrappedPlainViewMixedAPI : public ::javax::swing::text::WrappedPlainView, public ::FPMethodCalledTest$Resultable {
	$class(FPMethodCalledTest$WrappedPlainViewMixedAPI, $NO_CLASS_INIT, ::javax::swing::text::WrappedPlainView, ::FPMethodCalledTest$Resultable)
public:
	FPMethodCalledTest$WrappedPlainViewMixedAPI();
	using ::javax::swing::text::WrappedPlainView::getViewIndex;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::Element* elem);
	virtual int32_t drawUnselectedText(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t p0, int32_t p1) override;
	virtual float drawUnselectedText(::java::awt::Graphics2D* g, float x, float y, int32_t p0, int32_t p1) override;
	virtual bool getResult() override;
	using ::javax::swing::text::WrappedPlainView::updateChildren;
	using ::javax::swing::text::WrappedPlainView::modelToView;
	using ::javax::swing::text::WrappedPlainView::viewToModel;
	virtual $String* toString() override;
	bool isIntMethodCalled = false;
	bool isFPMethodCalled = false;
};

#endif // _FPMethodCalledTest$WrappedPlainViewMixedAPI_h_