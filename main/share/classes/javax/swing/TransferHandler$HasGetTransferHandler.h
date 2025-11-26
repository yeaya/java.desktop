#ifndef _javax_swing_TransferHandler$HasGetTransferHandler_h_
#define _javax_swing_TransferHandler$HasGetTransferHandler_h_
//$ interface javax.swing.TransferHandler$HasGetTransferHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		class TransferHandler;
	}
}

namespace javax {
	namespace swing {

class $export TransferHandler$HasGetTransferHandler : public ::java::lang::Object {
	$interface(TransferHandler$HasGetTransferHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::swing::TransferHandler* getTransferHandler() {return nullptr;}
};

	} // swing
} // javax

#endif // _javax_swing_TransferHandler$HasGetTransferHandler_h_