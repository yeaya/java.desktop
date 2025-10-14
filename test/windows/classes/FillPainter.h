#ifndef _FillPainter_h_
#define _FillPainter_h_
//$ class FillPainter
//$ extends javax.swing.Painter

#include <javax/swing/Painter.h>

namespace java {
	namespace awt {
		class Color;
		class Graphics2D;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}

class FillPainter : public ::javax::swing::Painter {
	$class(FillPainter, $NO_CLASS_INIT, ::javax::swing::Painter)
public:
	FillPainter();
	void init$(::java::awt::Color* c);
	virtual void paint(::java::awt::Graphics2D* g, ::javax::swing::JComponent* object, int32_t width, int32_t height);
	virtual void paint(::java::awt::Graphics2D* g, Object$* object, int32_t width, int32_t height) override;
	::java::awt::Color* color = nullptr;
};

#endif // _FillPainter_h_