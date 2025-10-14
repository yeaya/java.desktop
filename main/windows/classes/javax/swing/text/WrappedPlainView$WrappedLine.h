#ifndef _javax_swing_text_WrappedPlainView$WrappedLine_h_
#define _javax_swing_text_WrappedPlainView$WrappedLine_h_
//$ class javax.swing.text.WrappedPlainView$WrappedLine
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
		namespace ref {
			class SoftReference;
		}
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
		namespace text {
			class Element;
			class Position$Bias;
			class ViewFactory;
			class WrappedPlainView;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export WrappedPlainView$WrappedLine : public ::javax::swing::text::View {
	$class(WrappedPlainView$WrappedLine, $NO_CLASS_INIT, ::javax::swing::text::View)
public:
	WrappedPlainView$WrappedLine();
	void init$(::javax::swing::text::WrappedPlainView* this$0, ::javax::swing::text::Element* elem);
	$ints* breakLines(int32_t startPos);
	int32_t findLine(int32_t offset);
	int32_t findLine($ints* array, int32_t offset, int32_t min, int32_t max);
	$ints* getLineEnds();
	virtual float getPreferredSpan(int32_t axis) override;
	virtual void insertUpdate(::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	using ::javax::swing::text::View::modelToView;
	virtual ::java::awt::Shape* modelToView(int32_t pos, ::java::awt::Shape* a, ::javax::swing::text::Position$Bias* b) override;
	virtual void paint(::java::awt::Graphics* g, ::java::awt::Shape* a) override;
	virtual void removeUpdate(::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	void update(::javax::swing::event::DocumentEvent* ev, ::java::awt::Shape* a);
	using ::javax::swing::text::View::viewToModel;
	virtual int32_t viewToModel(float fx, float fy, ::java::awt::Shape* a, $Array<::javax::swing::text::Position$Bias>* bias) override;
	::javax::swing::text::WrappedPlainView* this$0 = nullptr;
	int32_t lineCount = 0;
	::java::lang::ref::SoftReference* lineCache = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_WrappedPlainView$WrappedLine_h_