#ifndef _javax_swing_DefaultDesktopManager_h_
#define _javax_swing_DefaultDesktopManager_h_
//$ class javax.swing.DefaultDesktopManager
//$ extends javax.swing.DesktopManager
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <javax/swing/DesktopManager.h>

#pragma push_macro("DEFAULT_DRAG_MODE")
#undef DEFAULT_DRAG_MODE
#pragma push_macro("FASTER_DRAG_MODE")
#undef FASTER_DRAG_MODE
#pragma push_macro("HAS_BEEN_ICONIFIED_PROPERTY")
#undef HAS_BEEN_ICONIFIED_PROPERTY
#pragma push_macro("OUTLINE_DRAG_MODE")
#undef OUTLINE_DRAG_MODE

namespace java {
	namespace awt {
		class Graphics;
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JDesktopPane;
		class JInternalFrame;
	}
}

namespace javax {
	namespace swing {

class $export DefaultDesktopManager : public ::javax::swing::DesktopManager, public ::java::io::Serializable {
	$class(DefaultDesktopManager, 0, ::javax::swing::DesktopManager, ::java::io::Serializable)
public:
	DefaultDesktopManager();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void activateFrame(::javax::swing::JInternalFrame* f) override;
	virtual void beginDraggingFrame(::javax::swing::JComponent* f) override;
	virtual void beginResizingFrame(::javax::swing::JComponent* f, int32_t direction) override;
	virtual void closeFrame(::javax::swing::JInternalFrame* f) override;
	virtual void deactivateFrame(::javax::swing::JInternalFrame* f) override;
	virtual void deiconifyFrame(::javax::swing::JInternalFrame* f) override;
	virtual void dragFrame(::javax::swing::JComponent* f, int32_t newX, int32_t newY) override;
	void dragFrameFaster(::javax::swing::JComponent* f, int32_t newX, int32_t newY);
	void emergencyCleanup(::javax::swing::JComponent* f);
	virtual void endDraggingFrame(::javax::swing::JComponent* f) override;
	virtual void endResizingFrame(::javax::swing::JComponent* f) override;
	$Array<::java::awt::Rectangle>* findFloatingItems(::javax::swing::JComponent* f);
	virtual ::java::awt::Rectangle* getBoundsForIconOf(::javax::swing::JInternalFrame* f);
	virtual ::javax::swing::JDesktopPane* getDesktopPane(::javax::swing::JComponent* frame);
	virtual ::java::awt::Rectangle* getPreviousBounds(::javax::swing::JInternalFrame* f);
	virtual void iconifyFrame(::javax::swing::JInternalFrame* f) override;
	bool isFloaterCollision(::java::awt::Rectangle* moveFrom, ::java::awt::Rectangle* moveTo);
	virtual void maximizeFrame(::javax::swing::JInternalFrame* f) override;
	virtual void minimizeFrame(::javax::swing::JInternalFrame* f) override;
	virtual void openFrame(::javax::swing::JInternalFrame* f) override;
	virtual void removeIconFor(::javax::swing::JInternalFrame* f);
	virtual void resizeFrame(::javax::swing::JComponent* f, int32_t newX, int32_t newY, int32_t newWidth, int32_t newHeight) override;
	virtual void setBoundsForFrame(::javax::swing::JComponent* f, int32_t newX, int32_t newY, int32_t newWidth, int32_t newHeight) override;
	virtual void setPreviousBounds(::javax::swing::JInternalFrame* f, ::java::awt::Rectangle* r);
	virtual void setWasIcon(::javax::swing::JInternalFrame* f, ::java::lang::Boolean* value);
	void setupDragMode(::javax::swing::JComponent* f);
	virtual $String* toString() override;
	virtual bool wasIcon(::javax::swing::JInternalFrame* f);
	static $String* HAS_BEEN_ICONIFIED_PROPERTY;
	static const int32_t DEFAULT_DRAG_MODE = 0;
	static const int32_t OUTLINE_DRAG_MODE = 1;
	static const int32_t FASTER_DRAG_MODE = 2;
	int32_t dragMode = 0;
	::java::awt::Rectangle* currentBounds = nullptr;
	::java::awt::Graphics* desktopGraphics = nullptr;
	::java::awt::Rectangle* desktopBounds = nullptr;
	$Array<::java::awt::Rectangle>* floatingItems = nullptr;
	bool didDrag = false;
	::java::awt::Point* currentLoc = nullptr;
};

	} // swing
} // javax

#pragma pop_macro("DEFAULT_DRAG_MODE")
#pragma pop_macro("FASTER_DRAG_MODE")
#pragma pop_macro("HAS_BEEN_ICONIFIED_PROPERTY")
#pragma pop_macro("OUTLINE_DRAG_MODE")

#endif // _javax_swing_DefaultDesktopManager_h_