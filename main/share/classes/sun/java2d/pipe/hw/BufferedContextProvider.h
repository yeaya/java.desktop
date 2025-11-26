#ifndef _sun_java2d_pipe_hw_BufferedContextProvider_h_
#define _sun_java2d_pipe_hw_BufferedContextProvider_h_
//$ interface sun.java2d.pipe.hw.BufferedContextProvider
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace java2d {
		namespace pipe {
			class BufferedContext;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {
			namespace hw {

class BufferedContextProvider : public ::java::lang::Object {
	$interface(BufferedContextProvider, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::sun::java2d::pipe::BufferedContext* getContext() {return nullptr;}
};

			} // hw
		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_hw_BufferedContextProvider_h_