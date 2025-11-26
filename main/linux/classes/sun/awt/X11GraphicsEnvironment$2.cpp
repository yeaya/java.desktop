#include <sun/awt/X11GraphicsEnvironment$2.h>

#include <java/net/InetAddress.h>
#include <java/net/NetworkInterface.h>
#include <java/net/SocketException.h>
#include <java/net/UnknownHostException.h>
#include <java/util/Enumeration.h>
#include <sun/awt/X11GraphicsEnvironment.h>
#include <jcpp.h>

#undef FALSE
#undef TRUE

using $InetAddressArray = $Array<::java::net::InetAddress>;
using $PrintStream = ::java::io::PrintStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $NetworkInterface = ::java::net::NetworkInterface;
using $SocketException = ::java::net::SocketException;
using $UnknownHostException = ::java::net::UnknownHostException;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Enumeration = ::java::util::Enumeration;
using $X11GraphicsEnvironment = ::sun::awt::X11GraphicsEnvironment;

namespace sun {
	namespace awt {

$FieldInfo _X11GraphicsEnvironment$2_FieldInfo_[] = {
	{"val$hostName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(X11GraphicsEnvironment$2, val$hostName)},
	{}
};

$MethodInfo _X11GraphicsEnvironment$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(X11GraphicsEnvironment$2::*)($String*)>(&X11GraphicsEnvironment$2::init$))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _X11GraphicsEnvironment$2_EnclosingMethodInfo_ = {
	"sun.awt.X11GraphicsEnvironment",
	"_isDisplayLocal",
	"()Z"
};

$InnerClassInfo _X11GraphicsEnvironment$2_InnerClassesInfo_[] = {
	{"sun.awt.X11GraphicsEnvironment$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _X11GraphicsEnvironment$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11GraphicsEnvironment$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_X11GraphicsEnvironment$2_FieldInfo_,
	_X11GraphicsEnvironment$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
	&_X11GraphicsEnvironment$2_EnclosingMethodInfo_,
	_X11GraphicsEnvironment$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11GraphicsEnvironment"
};

$Object* allocate$X11GraphicsEnvironment$2($Class* clazz) {
	return $of($alloc(X11GraphicsEnvironment$2));
}

void X11GraphicsEnvironment$2::init$($String* val$hostName) {
	$set(this, val$hostName, val$hostName);
}

$Object* X11GraphicsEnvironment$2::run() {
	$useLocalCurrentObjectStackCache();
	$var($InetAddressArray, remAddr, nullptr);
	$var($Enumeration, locals, nullptr);
	$var($Enumeration, interfaces, nullptr);
	try {
		$assign(interfaces, $NetworkInterface::getNetworkInterfaces());
		$assign(remAddr, $InetAddress::getAllByName(this->val$hostName));
		if (remAddr == nullptr) {
			$init($Boolean);
			return $of($Boolean::FALSE);
		}
	} catch ($UnknownHostException& e) {
		$nc($System::err)->println($$str({"Unknown host: "_s, this->val$hostName}));
		$init($Boolean);
		return $of($Boolean::FALSE);
	} catch ($SocketException& e1) {
		$nc($System::err)->println($(e1->getMessage()));
		$init($Boolean);
		return $of($Boolean::FALSE);
	}
	for (; $nc(interfaces)->hasMoreElements();) {
		$assign(locals, $nc(($cast($NetworkInterface, $(interfaces->nextElement()))))->getInetAddresses());
		for (; $nc(locals)->hasMoreElements();) {
			$var($InetAddress, localAddr, $cast($InetAddress, locals->nextElement()));
			for (int32_t i = 0; i < $nc(remAddr)->length; ++i) {
				if ($nc(localAddr)->equals(remAddr->get(i))) {
					$init($Boolean);
					return $of($Boolean::TRUE);
				}
			}
		}
	}
	$init($Boolean);
	return $of($Boolean::FALSE);
}

X11GraphicsEnvironment$2::X11GraphicsEnvironment$2() {
}

$Class* X11GraphicsEnvironment$2::load$($String* name, bool initialize) {
	$loadClass(X11GraphicsEnvironment$2, name, initialize, &_X11GraphicsEnvironment$2_ClassInfo_, allocate$X11GraphicsEnvironment$2);
	return class$;
}

$Class* X11GraphicsEnvironment$2::class$ = nullptr;

	} // awt
} // sun