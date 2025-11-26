#ifndef _javax_swing_RepaintManager$PaintManager_h_
#define _javax_swing_RepaintManager$PaintManager_h_
//$ class javax.swing.RepaintManager$PaintManager
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Container;
		class Graphics;
		class Image;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
		}
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JRootPane;
		class RepaintManager;
	}
}

namespace javax {
	namespace swing {

class $export RepaintManager$PaintManager : public ::java::lang::Object {
	$class(RepaintManager$PaintManager, 0, ::java::lang::Object)
public:
	RepaintManager$PaintManager();
	void init$();
	virtual void beginPaint();
	virtual void copyArea(::javax::swing::JComponent* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t deltaX, int32_t deltaY, bool clip);
	virtual void dispose();
	virtual void doubleBufferingChanged(::javax::swing::JRootPane* rootPane);
	virtual void endPaint();
	static ::java::awt::geom::AffineTransform* getTransform(::java::awt::Graphics* g);
	::java::awt::Image* getValidImage(::java::awt::Image* image);
	bool isPixelsCopying(::javax::swing::JComponent* c, ::java::awt::Graphics* g);
	virtual bool isRepaintingRoot();
	virtual bool paint(::javax::swing::JComponent* paintingComponent, ::javax::swing::JComponent* bufferComponent, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintDoubleBuffered(::javax::swing::JComponent* c, ::java::awt::Image* image, ::java::awt::Graphics* g, int32_t clipX, int32_t clipY, int32_t clipW, int32_t clipH);
	void paintDoubleBufferedFPScales(::javax::swing::JComponent* c, ::java::awt::Image* image, ::java::awt::Graphics* g, int32_t clipX, int32_t clipY, int32_t clipW, int32_t clipH);
	void paintDoubleBufferedImpl(::javax::swing::JComponent* c, ::java::awt::Image* image, ::java::awt::Graphics* g, int32_t clipX, int32_t clipY, int32_t clipW, int32_t clipH);
	virtual void repaintRoot(::javax::swing::JComponent* root);
	virtual bool show(::java::awt::Container* c, int32_t x, int32_t y, int32_t w, int32_t h);
	static bool $assertionsDisabled;
	::javax::swing::RepaintManager* repaintManager = nullptr;
	bool isRepaintingRoot$ = false;
};

	} // swing
} // javax

#endif // _javax_swing_RepaintManager$PaintManager_h_