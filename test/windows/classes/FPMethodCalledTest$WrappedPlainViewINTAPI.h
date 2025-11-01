#ifndef _FPMethodCalledTest$WrappedPlainViewINTAPI_h_
#define _FPMethodCalledTest$WrappedPlainViewINTAPI_h_
//$ class FPMethodCalledTest$WrappedPlainViewINTAPI
//$ extends javax.swing.text.WrappedPlainView
//$ implements FPMethodCalledTest$Resultable

#include <FPMethodCalledTest$Resultable.h>
#include <javax/swing/text/WrappedPlainView.h>

namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Element;
		}
	}
}

class $export FPMethodCalledTest$WrappedPlainViewINTAPI : public ::javax::swing::text::WrappedPlainView, public ::FPMethodCalledTest$Resultable {
	$class(FPMethodCalledTest$WrappedPlainViewINTAPI, $NO_CLASS_INIT, ::javax::swing::text::WrappedPlainView, ::FPMethodCalledTest$Resultable)
public:
	FPMethodCalledTest$WrappedPlainViewINTAPI();
	using ::javax::swing::text::WrappedPlainView::drawLine;
	using ::javax::swing::text::WrappedPlainView::drawUnselectedText;
	using ::javax::swing::text::WrappedPlainView::drawSelectedText;
	using ::javax::swing::text::WrappedPlainView::getViewIndex;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::Element* elem);
	virtual void drawLine(int32_t p0, int32_t p1, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	virtual int32_t drawSelectedText(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t p0, int32_t p1) override;
	virtual int32_t drawUnselectedText(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t p0, int32_t p1) override;
	virtual bool getResult() override;
	using ::javax::swing::text::WrappedPlainView::updateChildren;
	using ::javax::swing::text::WrappedPlainView::modelToView;
	using ::javax::swing::text::WrappedPlainView::viewToModel;
	virtual $String* toString() override;
	bool drawLine$ = false;
	bool drawSelected = false;
	bool drawUnselected = false;
};

#endif // _FPMethodCalledTest$WrappedPlainViewINTAPI_h_