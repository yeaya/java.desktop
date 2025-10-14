#ifndef _bug6608456$TestRepaintManager_h_
#define _bug6608456$TestRepaintManager_h_
//$ class bug6608456$TestRepaintManager
//$ extends javax.swing.RepaintManager

#include <javax/swing/RepaintManager.h>

namespace javax {
	namespace swing {
		class JComponent;
	}
}

class $export bug6608456$TestRepaintManager : public ::javax::swing::RepaintManager {
	$class(bug6608456$TestRepaintManager, $NO_CLASS_INIT, ::javax::swing::RepaintManager)
public:
	bug6608456$TestRepaintManager();
	using ::javax::swing::RepaintManager::addDirtyRegion;
	void init$();
	virtual void addDirtyRegion(::javax::swing::JComponent* c, int32_t x, int32_t y, int32_t w, int32_t h) override;
};

#endif // _bug6608456$TestRepaintManager_h_