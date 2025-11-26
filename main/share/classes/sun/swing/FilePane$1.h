#ifndef _sun_swing_FilePane$1_h_
#define _sun_swing_FilePane$1_h_
//$ class sun.swing.FilePane$1
//$ extends java.awt.event.KeyAdapter

#include <java/awt/event/KeyAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
		}
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace sun {
	namespace swing {
		class FilePane;
	}
}

namespace sun {
	namespace swing {

class FilePane$1 : public ::java::awt::event::KeyAdapter {
	$class(FilePane$1, $NO_CLASS_INIT, ::java::awt::event::KeyAdapter)
public:
	FilePane$1();
	void init$(::sun::swing::FilePane* this$0);
	int32_t getNextMatch(int32_t startIndex, int32_t finishIndex);
	virtual void keyTyped(::java::awt::event::KeyEvent* e) override;
	::sun::swing::FilePane* this$0 = nullptr;
	int64_t timeFactor = 0;
	::java::lang::StringBuilder* typedString = nullptr;
	int64_t lastTime = 0;
};

	} // swing
} // sun

#endif // _sun_swing_FilePane$1_h_