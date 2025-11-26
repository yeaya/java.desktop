#ifndef _sun_awt_X11_MotifDnDConstants_h_
#define _sun_awt_X11_MotifDnDConstants_h_
//$ class sun.awt.X11.MotifDnDConstants
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DRAG_DROP_FINISH")
#undef DRAG_DROP_FINISH
#pragma push_macro("DRAG_MOTION")
#undef DRAG_MOTION
#pragma push_macro("DROP_FINISH")
#undef DROP_FINISH
#pragma push_macro("DROP_SITE_ENTER")
#undef DROP_SITE_ENTER
#pragma push_macro("DROP_SITE_LEAVE")
#undef DROP_SITE_LEAVE
#pragma push_macro("DROP_START")
#undef DROP_START
#pragma push_macro("MOTIF_DND_ACTIONS_MASK")
#undef MOTIF_DND_ACTIONS_MASK
#pragma push_macro("MOTIF_DND_ACTIONS_SHIFT")
#undef MOTIF_DND_ACTIONS_SHIFT
#pragma push_macro("MOTIF_DND_ACTION_MASK")
#undef MOTIF_DND_ACTION_MASK
#pragma push_macro("MOTIF_DND_ACTION_SHIFT")
#undef MOTIF_DND_ACTION_SHIFT
#pragma push_macro("MOTIF_DND_COPY")
#undef MOTIF_DND_COPY
#pragma push_macro("MOTIF_DND_LINK")
#undef MOTIF_DND_LINK
#pragma push_macro("MOTIF_DND_MOVE")
#undef MOTIF_DND_MOVE
#pragma push_macro("MOTIF_DND_NOOP")
#undef MOTIF_DND_NOOP
#pragma push_macro("MOTIF_DND_PROTOCOL_VERSION")
#undef MOTIF_DND_PROTOCOL_VERSION
#pragma push_macro("MOTIF_DND_STATUS_MASK")
#undef MOTIF_DND_STATUS_MASK
#pragma push_macro("MOTIF_DND_STATUS_SHIFT")
#undef MOTIF_DND_STATUS_SHIFT
#pragma push_macro("MOTIF_DYNAMIC_STYLE")
#undef MOTIF_DYNAMIC_STYLE
#pragma push_macro("MOTIF_INITIATOR_INFO_SIZE")
#undef MOTIF_INITIATOR_INFO_SIZE
#pragma push_macro("MOTIF_INVALID_DROP_SITE")
#undef MOTIF_INVALID_DROP_SITE
#pragma push_macro("MOTIF_MESSAGE_FROM_INITIATOR")
#undef MOTIF_MESSAGE_FROM_INITIATOR
#pragma push_macro("MOTIF_MESSAGE_FROM_RECEIVER")
#undef MOTIF_MESSAGE_FROM_RECEIVER
#pragma push_macro("MOTIF_MESSAGE_REASON_MASK")
#undef MOTIF_MESSAGE_REASON_MASK
#pragma push_macro("MOTIF_MESSAGE_SENDER_MASK")
#undef MOTIF_MESSAGE_SENDER_MASK
#pragma push_macro("MOTIF_NO_DROP_SITE")
#undef MOTIF_NO_DROP_SITE
#pragma push_macro("MOTIF_PREFER_DYNAMIC_STYLE")
#undef MOTIF_PREFER_DYNAMIC_STYLE
#pragma push_macro("MOTIF_PREFER_PREREGISTER_STYLE")
#undef MOTIF_PREFER_PREREGISTER_STYLE
#pragma push_macro("MOTIF_PREFER_RECEIVER_STYLE")
#undef MOTIF_PREFER_RECEIVER_STYLE
#pragma push_macro("MOTIF_RECEIVER_INFO_SIZE")
#undef MOTIF_RECEIVER_INFO_SIZE
#pragma push_macro("MOTIF_VALID_DROP_SITE")
#undef MOTIF_VALID_DROP_SITE
#pragma push_macro("OPERATION_CHANGED")
#undef OPERATION_CHANGED
#pragma push_macro("TOP_LEVEL_ENTER")
#undef TOP_LEVEL_ENTER
#pragma push_macro("TOP_LEVEL_LEAVE")
#undef TOP_LEVEL_LEAVE
#pragma push_macro("XA_MOTIF_ATOM_0")
#undef XA_MOTIF_ATOM_0
#pragma push_macro("XA_MOTIF_DRAG_AND_DROP_MESSAGE")
#undef XA_MOTIF_DRAG_AND_DROP_MESSAGE
#pragma push_macro("XA_MOTIF_DRAG_INITIATOR_INFO")
#undef XA_MOTIF_DRAG_INITIATOR_INFO
#pragma push_macro("XA_MOTIF_DRAG_RECEIVER_INFO")
#undef XA_MOTIF_DRAG_RECEIVER_INFO
#pragma push_macro("XA_MOTIF_DRAG_TARGETS")
#undef XA_MOTIF_DRAG_TARGETS
#pragma push_macro("XA_MOTIF_DRAG_WINDOW")
#undef XA_MOTIF_DRAG_WINDOW

namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XAtom;
			class XSelection;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class MotifDnDConstants : public ::java::lang::Object {
	$class(MotifDnDConstants, 0, ::java::lang::Object)
public:
	MotifDnDConstants();
	void init$();
	static int64_t createMotifWindow();
	static int8_t getByteOrderByte();
	static int32_t getIndexForTargetList($longs* formats);
	static int32_t getJavaActionsForMotifActions(int32_t motifActions);
	static int32_t getMotifActionsForJavaActions(int32_t javaActions);
	static int64_t getMotifWindow();
	static $longs* getTargetListForIndex(int32_t index);
	static $Array<int64_t, 2>* getTargetListTable(int64_t motifWindow);
	static void putTargetListTable(int64_t motifWindow, $Array<int64_t, 2>* table);
	static int64_t readMotifWindow();
	static void writeDragInitiatorInfoStruct(int64_t window, int32_t index);
	static void writeDragReceiverInfoStruct(int64_t window);
	static bool $assertionsDisabled;
	static ::jdk::internal::misc::Unsafe* unsafe;
	static ::sun::awt::X11::XAtom* XA_MOTIF_ATOM_0;
	static ::sun::awt::X11::XAtom* XA_MOTIF_DRAG_WINDOW;
	static ::sun::awt::X11::XAtom* XA_MOTIF_DRAG_TARGETS;
	static ::sun::awt::X11::XAtom* XA_MOTIF_DRAG_INITIATOR_INFO;
	static ::sun::awt::X11::XAtom* XA_MOTIF_DRAG_RECEIVER_INFO;
	static ::sun::awt::X11::XAtom* XA_MOTIF_DRAG_AND_DROP_MESSAGE;
	static ::sun::awt::X11::XAtom* XA_XmTRANSFER_SUCCESS;
	static ::sun::awt::X11::XAtom* XA_XmTRANSFER_FAILURE;
	static ::sun::awt::X11::XSelection* MotifDnDSelection;
	static const int8_t MOTIF_DND_PROTOCOL_VERSION = 0;
	static const int32_t MOTIF_PREFER_PREREGISTER_STYLE = 2;
	static const int32_t MOTIF_PREFER_DYNAMIC_STYLE = 4;
	static const int32_t MOTIF_DYNAMIC_STYLE = 5;
	static const int32_t MOTIF_PREFER_RECEIVER_STYLE = 6;
	static const int32_t MOTIF_INITIATOR_INFO_SIZE = 8;
	static const int32_t MOTIF_RECEIVER_INFO_SIZE = 16;
	static const int8_t MOTIF_MESSAGE_REASON_MASK = (int8_t)127;
	static const int8_t MOTIF_MESSAGE_SENDER_MASK = (int8_t)128;
	static const int8_t MOTIF_MESSAGE_FROM_RECEIVER = (int8_t)128;
	static const int8_t MOTIF_MESSAGE_FROM_INITIATOR = (int8_t)0;
	static const int32_t MOTIF_DND_ACTION_MASK = 15;
	static const int32_t MOTIF_DND_ACTION_SHIFT = 0;
	static const int32_t MOTIF_DND_STATUS_MASK = 240;
	static const int32_t MOTIF_DND_STATUS_SHIFT = 4;
	static const int32_t MOTIF_DND_ACTIONS_MASK = 3840;
	static const int32_t MOTIF_DND_ACTIONS_SHIFT = 8;
	static const int8_t TOP_LEVEL_ENTER = 0;
	static const int8_t TOP_LEVEL_LEAVE = 1;
	static const int8_t DRAG_MOTION = 2;
	static const int8_t DROP_SITE_ENTER = 3;
	static const int8_t DROP_SITE_LEAVE = 4;
	static const int8_t DROP_START = 5;
	static const int8_t DROP_FINISH = 6;
	static const int8_t DRAG_DROP_FINISH = 7;
	static const int8_t OPERATION_CHANGED = 8;
	static const int32_t MOTIF_DND_NOOP = 0;
	static const int32_t MOTIF_DND_MOVE = 1; // 1 << 0
	static const int32_t MOTIF_DND_COPY = 2; // 1 << 1
	static const int32_t MOTIF_DND_LINK = 4; // 1 << 2
	static const int8_t MOTIF_NO_DROP_SITE = (int8_t)1;
	static const int8_t MOTIF_INVALID_DROP_SITE = (int8_t)2;
	static const int8_t MOTIF_VALID_DROP_SITE = (int8_t)3;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("DRAG_DROP_FINISH")
#pragma pop_macro("DRAG_MOTION")
#pragma pop_macro("DROP_FINISH")
#pragma pop_macro("DROP_SITE_ENTER")
#pragma pop_macro("DROP_SITE_LEAVE")
#pragma pop_macro("DROP_START")
#pragma pop_macro("MOTIF_DND_ACTIONS_MASK")
#pragma pop_macro("MOTIF_DND_ACTIONS_SHIFT")
#pragma pop_macro("MOTIF_DND_ACTION_MASK")
#pragma pop_macro("MOTIF_DND_ACTION_SHIFT")
#pragma pop_macro("MOTIF_DND_COPY")
#pragma pop_macro("MOTIF_DND_LINK")
#pragma pop_macro("MOTIF_DND_MOVE")
#pragma pop_macro("MOTIF_DND_NOOP")
#pragma pop_macro("MOTIF_DND_PROTOCOL_VERSION")
#pragma pop_macro("MOTIF_DND_STATUS_MASK")
#pragma pop_macro("MOTIF_DND_STATUS_SHIFT")
#pragma pop_macro("MOTIF_DYNAMIC_STYLE")
#pragma pop_macro("MOTIF_INITIATOR_INFO_SIZE")
#pragma pop_macro("MOTIF_INVALID_DROP_SITE")
#pragma pop_macro("MOTIF_MESSAGE_FROM_INITIATOR")
#pragma pop_macro("MOTIF_MESSAGE_FROM_RECEIVER")
#pragma pop_macro("MOTIF_MESSAGE_REASON_MASK")
#pragma pop_macro("MOTIF_MESSAGE_SENDER_MASK")
#pragma pop_macro("MOTIF_NO_DROP_SITE")
#pragma pop_macro("MOTIF_PREFER_DYNAMIC_STYLE")
#pragma pop_macro("MOTIF_PREFER_PREREGISTER_STYLE")
#pragma pop_macro("MOTIF_PREFER_RECEIVER_STYLE")
#pragma pop_macro("MOTIF_RECEIVER_INFO_SIZE")
#pragma pop_macro("MOTIF_VALID_DROP_SITE")
#pragma pop_macro("OPERATION_CHANGED")
#pragma pop_macro("TOP_LEVEL_ENTER")
#pragma pop_macro("TOP_LEVEL_LEAVE")
#pragma pop_macro("XA_MOTIF_ATOM_0")
#pragma pop_macro("XA_MOTIF_DRAG_AND_DROP_MESSAGE")
#pragma pop_macro("XA_MOTIF_DRAG_INITIATOR_INFO")
#pragma pop_macro("XA_MOTIF_DRAG_RECEIVER_INFO")
#pragma pop_macro("XA_MOTIF_DRAG_TARGETS")
#pragma pop_macro("XA_MOTIF_DRAG_WINDOW")

#endif // _sun_awt_X11_MotifDnDConstants_h_