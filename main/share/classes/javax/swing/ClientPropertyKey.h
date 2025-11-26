#ifndef _javax_swing_ClientPropertyKey_h_
#define _javax_swing_ClientPropertyKey_h_
//$ class javax.swing.ClientPropertyKey
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

namespace javax {
	namespace swing {

class ClientPropertyKey : public ::java::lang::Enum {
	$class(ClientPropertyKey, 0, ::java::lang::Enum)
public:
	ClientPropertyKey();
	static $Array<::javax::swing::ClientPropertyKey>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	void init$($String* $enum$name, int32_t $enum$ordinal, bool reportValueNotSerializable);
	virtual bool getReportValueNotSerializable();
	static ::javax::swing::ClientPropertyKey* valueOf($String* name);
	static $Array<::javax::swing::ClientPropertyKey>* values();
	static ::javax::swing::ClientPropertyKey* JComponent_INPUT_VERIFIER;
	static ::javax::swing::ClientPropertyKey* JComponent_TRANSFER_HANDLER;
	static ::javax::swing::ClientPropertyKey* JComponent_ANCESTOR_NOTIFIER;
	static ::javax::swing::ClientPropertyKey* PopupFactory_FORCE_HEAVYWEIGHT_POPUP;
	static $Array<::javax::swing::ClientPropertyKey>* $VALUES;
	bool reportValueNotSerializable = false;
};

	} // swing
} // javax

#endif // _javax_swing_ClientPropertyKey_h_