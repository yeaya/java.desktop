#ifndef _javax_swing_BufferStrategyPaintManager_h_
#define _javax_swing_BufferStrategyPaintManager_h_
//$ class javax.swing.BufferStrategyPaintManager
//$ extends javax.swing.RepaintManager$PaintManager

#include <javax/swing/RepaintManager$PaintManager.h>

#pragma push_macro("LOGGER")
#undef LOGGER

namespace java {
	namespace awt {
		class Container;
		class Graphics;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferStrategy;
		}
	}
}
namespace java {
	namespace util {
		class ArrayList;
		class List;
	}
}
namespace javax {
	namespace swing {
		class BufferStrategyPaintManager$BufferInfo;
		class JComponent;
		class JRootPane;
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace javax {
	namespace swing {

class BufferStrategyPaintManager : public ::javax::swing::RepaintManager$PaintManager {
	$class(BufferStrategyPaintManager, 0, ::javax::swing::RepaintManager$PaintManager)
public:
	BufferStrategyPaintManager();
	void init$();
	void accumulate(int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void beginPaint() override;
	virtual void copyArea(::javax::swing::JComponent* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t deltaX, int32_t deltaY, bool clip) override;
	virtual void dispose() override;
	void dispose(::java::util::List* bufferInfos);
	virtual void doubleBufferingChanged(::javax::swing::JRootPane* rootPane) override;
	void doubleBufferingChanged0(::javax::swing::JRootPane* rootPane);
	virtual void endPaint() override;
	::java::awt::Container* fetchRoot(::javax::swing::JComponent* c);
	bool flushAccumulatedRegion();
	::javax::swing::BufferStrategyPaintManager$BufferInfo* getBufferInfo(::java::awt::Container* root);
	virtual bool paint(::javax::swing::JComponent* paintingComponent, ::javax::swing::JComponent* bufferComponent, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	bool prepare(::javax::swing::JComponent* c, ::java::awt::Container* root, bool isPaint, int32_t x, int32_t y, int32_t w, int32_t h);
	void resetAccumulated();
	void resetDoubleBufferPerWindow();
	virtual bool show(::java::awt::Container* c, int32_t x, int32_t y, int32_t w, int32_t h) override;
	static ::sun::util::logging::PlatformLogger* LOGGER;
	::java::util::ArrayList* bufferInfos = nullptr;
	bool painting = false;
	bool showing = false;
	int32_t accumulatedX = 0;
	int32_t accumulatedY = 0;
	int32_t accumulatedMaxX = 0;
	int32_t accumulatedMaxY = 0;
	::javax::swing::JComponent* rootJ = nullptr;
	int32_t xOffset = 0;
	int32_t yOffset = 0;
	::java::awt::Graphics* bsg = nullptr;
	::java::awt::image::BufferStrategy* bufferStrategy = nullptr;
	::javax::swing::BufferStrategyPaintManager$BufferInfo* bufferInfo = nullptr;
	bool disposeBufferOnEnd = false;
};

	} // swing
} // javax

#pragma pop_macro("LOGGER")

#endif // _javax_swing_BufferStrategyPaintManager_h_