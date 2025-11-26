#ifndef _javax_swing_SwingContainer_h_
#define _javax_swing_SwingContainer_h_
//$ interface javax.swing.SwingContainer
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace javax {
	namespace swing {

class $export SwingContainer : public ::java::lang::annotation::Annotation {
	$interface(SwingContainer, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $String* delegate() {return nullptr;}
	virtual bool value() {return false;}
};

	} // swing
} // javax

#endif // _javax_swing_SwingContainer_h_