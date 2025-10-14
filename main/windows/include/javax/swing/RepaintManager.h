#ifndef _javax_swing_RepaintManager_h_
#define _javax_swing_RepaintManager_h_
//$ class javax.swing.RepaintManager
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("BUFFER_STRATEGY_NOT_SPECIFIED")
#undef BUFFER_STRATEGY_NOT_SPECIFIED
#pragma push_macro("BUFFER_STRATEGY_SPECIFIED_OFF")
#undef BUFFER_STRATEGY_SPECIFIED_OFF
#pragma push_macro("BUFFER_STRATEGY_SPECIFIED_ON")
#undef BUFFER_STRATEGY_SPECIFIED_ON
#pragma push_macro("BUFFER_STRATEGY_TYPE")
#undef BUFFER_STRATEGY_TYPE
#pragma push_macro("HANDLE_TOP_LEVEL_PAINT")
#undef HANDLE_TOP_LEVEL_PAINT
#pragma push_macro("VOLATILE_LOOP_MAX")
#undef VOLATILE_LOOP_MAX

namespace java {
	namespace applet {
		class Applet;
	}
}
namespace java {
	namespace awt {
		class Component;
		class Container;
		class Dimension;
		class Graphics;
		class GraphicsConfiguration;
		class Image;
		class Rectangle;
		class Window;
	}
}
namespace java {
	namespace lang {
		class Runnable;
		class Thread;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JRootPane;
		class RepaintManager$DoubleBufferInfo;
		class RepaintManager$PaintManager;
		class RepaintManager$ProcessingRunnable;
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaSecurityAccess;
		}
	}
}
namespace sun {
	namespace awt {
		class AppContext;
		class DisplayChangedListener;
	}
}
namespace sun {
	namespace swing {
		class SwingUtilities2$RepaintListener;
	}
}

namespace javax {
	namespace swing {

class $import RepaintManager : public ::java::lang::Object {
	$class(RepaintManager, 0, ::java::lang::Object)
public:
	RepaintManager();
	void init$();
	void init$(int16_t bufferStrategyType);
	::java::awt::Image* _getOffscreenBuffer(::java::awt::Component* c, int32_t proposedWidth, int32_t proposedHeight);
	virtual void addDirtyRegion(::javax::swing::JComponent* c, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void addDirtyRegion(::java::awt::Window* window, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void addDirtyRegion(::java::applet::Applet* applet, int32_t x, int32_t y, int32_t w, int32_t h);
	void addDirtyRegion0(::java::awt::Container* c, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void addInvalidComponent(::javax::swing::JComponent* invalidComponent);
	void addRepaintListener(::sun::swing::SwingUtilities2$RepaintListener* l);
	void adjustRoots(::javax::swing::JComponent* root, ::java::util::List* roots, int32_t index);
	virtual void beginPaint();
	void clearImages();
	void clearImages(int32_t width, int32_t height);
	virtual void collectDirtyComponents(::java::util::Map* dirtyComponents, ::java::awt::Component* dirtyComponent, ::java::util::List* roots);
	virtual void copyArea(::javax::swing::JComponent* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t deltaX, int32_t deltaY, bool clip);
	static ::javax::swing::RepaintManager* currentManager(::java::awt::Component* c);
	static ::javax::swing::RepaintManager* currentManager(::sun::awt::AppContext* appContext);
	static ::javax::swing::RepaintManager* currentManager(::javax::swing::JComponent* c);
	void displayChanged();
	virtual void doubleBufferingChanged(::javax::swing::JRootPane* rootPane);
	virtual void endPaint();
	bool extendDirtyRegion(::java::awt::Component* c, int32_t x, int32_t y, int32_t w, int32_t h);
	::javax::swing::RepaintManager* getDelegate(::java::awt::Component* c);
	virtual ::java::awt::Rectangle* getDirtyRegion(::javax::swing::JComponent* aComponent);
	virtual ::java::awt::Dimension* getDoubleBufferMaximumSize();
	virtual ::java::awt::Image* getOffscreenBuffer(::java::awt::Component* c, int32_t proposedWidth, int32_t proposedHeight);
	::javax::swing::RepaintManager$PaintManager* getPaintManager();
	virtual ::java::awt::Image* getVolatileOffscreenBuffer(::java::awt::Component* c, int32_t proposedWidth, int32_t proposedHeight);
	virtual bool isCompletelyDirty(::javax::swing::JComponent* aComponent);
	virtual bool isDoubleBufferingEnabled();
	virtual bool isPainting();
	bool isPaintingThread();
	virtual void markCompletelyClean(::javax::swing::JComponent* aComponent);
	virtual void markCompletelyDirty(::javax::swing::JComponent* aComponent);
	virtual void nativeAddDirtyRegion(::sun::awt::AppContext* appContext, ::java::awt::Container* c, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void nativeQueueSurfaceDataRunnable(::sun::awt::AppContext* appContext, ::java::awt::Component* c, ::java::lang::Runnable* r);
	virtual void notifyRepaintPerformed(::javax::swing::JComponent* c, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paint(::javax::swing::JComponent* paintingComponent, ::javax::swing::JComponent* bufferComponent, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintDirtyRegions();
	void paintDirtyRegions(::java::util::Map* tmpDirtyComponents);
	void prePaintDirtyRegions();
	virtual void removeInvalidComponent(::javax::swing::JComponent* component);
	void removeRepaintListener(::sun::swing::SwingUtilities2$RepaintListener* l);
	virtual void resetDoubleBuffer();
	virtual void resetVolatileDoubleBuffer(::java::awt::GraphicsConfiguration* gc);
	virtual void scheduleHeavyWeightPaints();
	void scheduleProcessingRunnable(::sun::awt::AppContext* context);
	static void setCurrentManager(::javax::swing::RepaintManager* aRepaintManager);
	virtual void setDoubleBufferMaximumSize(::java::awt::Dimension* d);
	virtual void setDoubleBufferingEnabled(bool aFlag);
	virtual void setPaintManager(::javax::swing::RepaintManager$PaintManager* paintManager);
	virtual bool show(::java::awt::Container* c, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual $String* toString() override;
	void updateWindows(::java::util::Map* dirtyComponents);
	virtual bool useVolatileDoubleBuffer();
	virtual void validateInvalidComponents();
	static bool HANDLE_TOP_LEVEL_PAINT;
	static const int16_t BUFFER_STRATEGY_NOT_SPECIFIED = 0;
	static const int16_t BUFFER_STRATEGY_SPECIFIED_ON = 1;
	static const int16_t BUFFER_STRATEGY_SPECIFIED_OFF = 2;
	static int16_t BUFFER_STRATEGY_TYPE;
	::java::util::Map* volatileMap = nullptr;
	::java::util::Map* hwDirtyComponents = nullptr;
	::java::util::Map* dirtyComponents = nullptr;
	::java::util::Map* tmpDirtyComponents = nullptr;
	::java::util::List* invalidComponents = nullptr;
	::java::util::List* runnableList = nullptr;
	bool doubleBufferingEnabled = false;
	::java::awt::Dimension* doubleBufferMaxSize = nullptr;
	bool isCustomMaxBufferSizeSet = false;
	::javax::swing::RepaintManager$DoubleBufferInfo* standardDoubleBuffer = nullptr;
	::javax::swing::RepaintManager$PaintManager* paintManager = nullptr;
	static $Object* repaintManagerKey;
	static bool volatileImageBufferEnabled;
	static int32_t volatileBufferType;
	static bool nativeDoubleBuffering;
	static const int32_t VOLATILE_LOOP_MAX = 2;
	int32_t paintDepth = 0;
	int16_t bufferStrategyType = 0;
	bool painting = false;
	::javax::swing::JComponent* repaintRoot = nullptr;
	$Thread* paintThread = nullptr;
	::javax::swing::RepaintManager$ProcessingRunnable* processingRunnable = nullptr;
	static ::jdk::internal::access::JavaSecurityAccess* javaSecurityAccess;
	static ::sun::awt::DisplayChangedListener* displayChangedHandler;
	::java::awt::Rectangle* tmp = nullptr;
	::java::util::List* repaintListeners = nullptr;
};

	} // swing
} // javax

#pragma pop_macro("BUFFER_STRATEGY_NOT_SPECIFIED")
#pragma pop_macro("BUFFER_STRATEGY_SPECIFIED_OFF")
#pragma pop_macro("BUFFER_STRATEGY_SPECIFIED_ON")
#pragma pop_macro("BUFFER_STRATEGY_TYPE")
#pragma pop_macro("HANDLE_TOP_LEVEL_PAINT")
#pragma pop_macro("VOLATILE_LOOP_MAX")

#endif // _javax_swing_RepaintManager_h_