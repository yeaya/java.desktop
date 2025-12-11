#include <sun/awt/X11/XTranslateCoordinates.h>

#include <java/lang/IllegalStateException.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/UnsafeXDisposerRecord.h>
#include <sun/awt/X11/XErrorHandler.h>
#include <sun/awt/X11/XErrorHandlerUtil.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/java2d/Disposer.h>
#include <sun/java2d/DisposerRecord.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Native = ::sun::awt::X11::Native;
using $UnsafeXDisposerRecord = ::sun::awt::X11::UnsafeXDisposerRecord;
using $XErrorHandler = ::sun::awt::X11::XErrorHandler;
using $XErrorHandlerUtil = ::sun::awt::X11::XErrorHandlerUtil;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $Disposer = ::sun::java2d::Disposer;
using $DisposerRecord = ::sun::java2d::DisposerRecord;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XTranslateCoordinates_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC, $staticField(XTranslateCoordinates, unsafe)},
	{"__executed", "Z", nullptr, $PRIVATE, $field(XTranslateCoordinates, __executed)},
	{"_scr_w", "J", nullptr, 0, $field(XTranslateCoordinates, _scr_w)},
	{"_dest_w", "J", nullptr, 0, $field(XTranslateCoordinates, _dest_w)},
	{"_src_x", "I", nullptr, 0, $field(XTranslateCoordinates, _src_x)},
	{"_src_y", "I", nullptr, 0, $field(XTranslateCoordinates, _src_y)},
	{"dest_x_ptr", "J", nullptr, 0, $field(XTranslateCoordinates, dest_x_ptr)},
	{"dest_y_ptr", "J", nullptr, 0, $field(XTranslateCoordinates, dest_y_ptr)},
	{"child_ptr", "J", nullptr, 0, $field(XTranslateCoordinates, child_ptr)},
	{"disposer", "Lsun/awt/X11/UnsafeXDisposerRecord;", nullptr, 0, $field(XTranslateCoordinates, disposer)},
	{}
};

$MethodInfo _XTranslateCoordinates_MethodInfo_[] = {
	{"<init>", "(JJII)V", nullptr, $PUBLIC, $method(static_cast<void(XTranslateCoordinates::*)(int64_t,int64_t,int32_t,int32_t)>(&XTranslateCoordinates::init$))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"execute", "()I", nullptr, $PUBLIC},
	{"execute", "(Lsun/awt/X11/XErrorHandler;)I", nullptr, $PUBLIC},
	{"get_child", "()J", nullptr, $PUBLIC},
	{"get_dest_w", "()J", nullptr, $PUBLIC},
	{"get_dest_x", "()I", nullptr, $PUBLIC},
	{"get_dest_y", "()I", nullptr, $PUBLIC},
	{"get_scr_w", "()J", nullptr, $PUBLIC},
	{"get_src_x", "()I", nullptr, $PUBLIC},
	{"get_src_y", "()I", nullptr, $PUBLIC},
	{"isDisposed", "()Z", nullptr, $PUBLIC},
	{"isExecuted", "()Z", nullptr, $PUBLIC},
	{"set_child", "(J)V", nullptr, $PUBLIC},
	{"set_dest_w", "(J)V", nullptr, $PUBLIC},
	{"set_dest_x", "(I)V", nullptr, $PUBLIC},
	{"set_dest_y", "(I)V", nullptr, $PUBLIC},
	{"set_scr_w", "(J)V", nullptr, $PUBLIC},
	{"set_src_x", "(I)V", nullptr, $PUBLIC},
	{"set_src_y", "(I)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XTranslateCoordinates_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XTranslateCoordinates",
	"java.lang.Object",
	nullptr,
	_XTranslateCoordinates_FieldInfo_,
	_XTranslateCoordinates_MethodInfo_
};

$Object* allocate$XTranslateCoordinates($Class* clazz) {
	return $of($alloc(XTranslateCoordinates));
}

$Unsafe* XTranslateCoordinates::unsafe = nullptr;

void XTranslateCoordinates::init$(int64_t scr_w, int64_t dest_w, int32_t src_x, int32_t src_y) {
	this->__executed = false;
	this->dest_x_ptr = $nc(XTranslateCoordinates::unsafe)->allocateMemory($Native::getIntSize());
	this->dest_y_ptr = $nc(XTranslateCoordinates::unsafe)->allocateMemory($Native::getIntSize());
	this->child_ptr = $nc(XTranslateCoordinates::unsafe)->allocateMemory($Native::getLongSize());
	set_scr_w(scr_w);
	set_dest_w(dest_w);
	set_src_x(src_x);
	set_src_y(src_y);
	$Disposer::addRecord(this, ($set(this, disposer, $new($UnsafeXDisposerRecord, "XTranslateCoordinates"_s, $$new($longs, {
		this->dest_x_ptr,
		this->dest_y_ptr,
		this->child_ptr
	})))));
}

int32_t XTranslateCoordinates::execute() {
	return execute(nullptr);
}

int32_t XTranslateCoordinates::execute($XErrorHandler* errorHandler) {
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			if (isDisposed()) {
				$throwNew($IllegalStateException, "Disposed"_s);
			}
			if (this->__executed) {
				$throwNew($IllegalStateException, "Already executed"_s);
			}
			this->__executed = true;
			if (errorHandler != nullptr) {
				$XErrorHandlerUtil::WITH_XERROR_HANDLER(errorHandler);
			}
			int64_t var$3 = $XToolkit::getDisplay();
			int64_t var$4 = get_scr_w();
			int64_t var$5 = get_dest_w();
			int64_t var$6 = (int64_t)get_src_x();
			int32_t status = $XlibWrapper::XTranslateCoordinates(var$3, var$4, var$5, var$6, get_src_y(), this->dest_x_ptr, this->dest_y_ptr, this->child_ptr);
			if (errorHandler != nullptr) {
				$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
			}
			var$2 = status;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$7) {
			$assign(var$0, var$7);
		} $finally: {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool XTranslateCoordinates::isExecuted() {
	return this->__executed;
}

bool XTranslateCoordinates::isDisposed() {
	return $nc(this->disposer)->disposed;
}

void XTranslateCoordinates::dispose() {
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			if (isDisposed()) {
				return$1 = true;
				goto $finally;
			}
			$nc(this->disposer)->dispose();
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} $finally: {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

int64_t XTranslateCoordinates::get_scr_w() {
	if (isDisposed()) {
		$throwNew($IllegalStateException, "Disposed"_s);
	}
	if (!this->__executed) {
		$throwNew($IllegalStateException, "Not executed"_s);
	}
	return this->_scr_w;
}

void XTranslateCoordinates::set_scr_w(int64_t data) {
	this->_scr_w = data;
}

int64_t XTranslateCoordinates::get_dest_w() {
	if (isDisposed()) {
		$throwNew($IllegalStateException, "Disposed"_s);
	}
	if (!this->__executed) {
		$throwNew($IllegalStateException, "Not executed"_s);
	}
	return this->_dest_w;
}

void XTranslateCoordinates::set_dest_w(int64_t data) {
	this->_dest_w = data;
}

int32_t XTranslateCoordinates::get_src_x() {
	if (isDisposed()) {
		$throwNew($IllegalStateException, "Disposed"_s);
	}
	if (!this->__executed) {
		$throwNew($IllegalStateException, "Not executed"_s);
	}
	return this->_src_x;
}

void XTranslateCoordinates::set_src_x(int32_t data) {
	this->_src_x = data;
}

int32_t XTranslateCoordinates::get_src_y() {
	if (isDisposed()) {
		$throwNew($IllegalStateException, "Disposed"_s);
	}
	if (!this->__executed) {
		$throwNew($IllegalStateException, "Not executed"_s);
	}
	return this->_src_y;
}

void XTranslateCoordinates::set_src_y(int32_t data) {
	this->_src_y = data;
}

int32_t XTranslateCoordinates::get_dest_x() {
	if (isDisposed()) {
		$throwNew($IllegalStateException, "Disposed"_s);
	}
	if (!this->__executed) {
		$throwNew($IllegalStateException, "Not executed"_s);
	}
	return $Native::getInt(this->dest_x_ptr);
}

void XTranslateCoordinates::set_dest_x(int32_t data) {
	$Native::putInt(this->dest_x_ptr, data);
}

int32_t XTranslateCoordinates::get_dest_y() {
	if (isDisposed()) {
		$throwNew($IllegalStateException, "Disposed"_s);
	}
	if (!this->__executed) {
		$throwNew($IllegalStateException, "Not executed"_s);
	}
	return $Native::getInt(this->dest_y_ptr);
}

void XTranslateCoordinates::set_dest_y(int32_t data) {
	$Native::putInt(this->dest_y_ptr, data);
}

int64_t XTranslateCoordinates::get_child() {
	if (isDisposed()) {
		$throwNew($IllegalStateException, "Disposed"_s);
	}
	if (!this->__executed) {
		$throwNew($IllegalStateException, "Not executed"_s);
	}
	return $Native::getLong(this->child_ptr);
}

void XTranslateCoordinates::set_child(int64_t data) {
	$Native::putLong(this->child_ptr, data);
}

void clinit$XTranslateCoordinates($Class* class$) {
	$init($XlibWrapper);
	$assignStatic(XTranslateCoordinates::unsafe, $XlibWrapper::unsafe);
}

XTranslateCoordinates::XTranslateCoordinates() {
}

$Class* XTranslateCoordinates::load$($String* name, bool initialize) {
	$loadClass(XTranslateCoordinates, name, initialize, &_XTranslateCoordinates_ClassInfo_, clinit$XTranslateCoordinates, allocate$XTranslateCoordinates);
	return class$;
}

$Class* XTranslateCoordinates::class$ = nullptr;

		} // X11
	} // awt
} // sun