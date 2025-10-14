#ifndef _sun_swing_SwingUtilities2$KeyPair_h_
#define _sun_swing_SwingUtilities2$KeyPair_h_
//$ class sun.swing.SwingUtilities2$KeyPair
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace swing {

class SwingUtilities2$KeyPair : public ::java::lang::Object {
	$class(SwingUtilities2$KeyPair, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SwingUtilities2$KeyPair();
	void init$(Object$* key1, Object$* key2);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	$Object* key1 = nullptr;
	$Object* key2 = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_SwingUtilities2$KeyPair_h_