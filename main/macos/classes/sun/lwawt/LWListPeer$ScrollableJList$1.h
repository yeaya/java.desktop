#ifndef _sun_lwawt_LWListPeer$ScrollableJList$1_h_
#define _sun_lwawt_LWListPeer$ScrollableJList$1_h_
//$ class sun.lwawt.LWListPeer$ScrollableJList$1
//$ extends javax.swing.DefaultListModel

#include <javax/swing/DefaultListModel.h>

namespace sun {
	namespace lwawt {
		class LWListPeer$ScrollableJList;
	}
}

namespace sun {
	namespace lwawt {

class LWListPeer$ScrollableJList$1 : public ::javax::swing::DefaultListModel {
	$class(LWListPeer$ScrollableJList$1, $NO_CLASS_INIT, ::javax::swing::DefaultListModel)
public:
	LWListPeer$ScrollableJList$1();
	void init$(::sun::lwawt::LWListPeer$ScrollableJList* this$1);
	virtual void add(int32_t index, $String* element);
	virtual void add(int32_t index, Object$* element) override;
	::sun::lwawt::LWListPeer$ScrollableJList* this$1 = nullptr;
};

	} // lwawt
} // sun

#endif // _sun_lwawt_LWListPeer$ScrollableJList$1_h_