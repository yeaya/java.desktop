#include <sun/java2d/marlin/MarlinProperties.h>

#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/Float.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/java2d/marlin/FloatMath.h>
#include <sun/java2d/marlin/MarlinConst.h>
#include <sun/java2d/marlin/MarlinUtils.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_SUBPIXELS
#undef NEGATIVE_INFINITY
#undef POSITIVE_INFINITY

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $FloatMath = ::sun::java2d::marlin::FloatMath;
using $MarlinConst = ::sun::java2d::marlin::MarlinConst;
using $MarlinUtils = ::sun::java2d::marlin::MarlinUtils;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace java2d {
		namespace marlin {

$MethodInfo _MarlinProperties_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MarlinProperties::*)()>(&MarlinProperties::init$))},
	{"align", "(II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&MarlinProperties::align))},
	{"getBlockSize_Log2", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&MarlinProperties::getBlockSize_Log2))},
	{"getBoolean", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($String*,$String*)>(&MarlinProperties::getBoolean))},
	{"getCubicDecD2", "()F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)()>(&MarlinProperties::getCubicDecD2))},
	{"getCubicIncD1", "()F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)()>(&MarlinProperties::getCubicIncD1))},
	{"getCurveLengthError", "()F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)()>(&MarlinProperties::getCurveLengthError))},
	{"getDouble", "(Ljava/lang/String;DDD)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)($String*,double,double,double)>(&MarlinProperties::getDouble))},
	{"getFloat", "(Ljava/lang/String;FFF)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)($String*,float,float,float)>(&MarlinProperties::getFloat))},
	{"getInitialEdges", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&MarlinProperties::getInitialEdges))},
	{"getInitialPixelHeight", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&MarlinProperties::getInitialPixelHeight))},
	{"getInitialPixelWidth", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&MarlinProperties::getInitialPixelWidth))},
	{"getInteger", "(Ljava/lang/String;III)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($String*,int32_t,int32_t,int32_t)>(&MarlinProperties::getInteger))},
	{"getPathSimplifierPixelTolerance", "()F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)()>(&MarlinProperties::getPathSimplifierPixelTolerance))},
	{"getQuadDecD2", "()F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)()>(&MarlinProperties::getQuadDecD2))},
	{"getRLEMinWidth", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&MarlinProperties::getRLEMinWidth))},
	{"getSubPixel_Log2_X", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&MarlinProperties::getSubPixel_Log2_X))},
	{"getSubPixel_Log2_Y", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&MarlinProperties::getSubPixel_Log2_Y))},
	{"getSubdividerMinLength", "()F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)()>(&MarlinProperties::getSubdividerMinLength))},
	{"getTileSize_Log2", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&MarlinProperties::getTileSize_Log2))},
	{"getTileWidth_Log2", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&MarlinProperties::getTileWidth_Log2))},
	{"isDoChecks", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&MarlinProperties::isDoChecks))},
	{"isDoClip", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&MarlinProperties::isDoClip))},
	{"isDoClipAtRuntime", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&MarlinProperties::isDoClipAtRuntime))},
	{"isDoClipRuntimeFlag", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&MarlinProperties::isDoClipRuntimeFlag))},
	{"isDoClipSubdivider", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&MarlinProperties::isDoClipSubdivider))},
	{"isDoMonitors", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&MarlinProperties::isDoMonitors))},
	{"isDoStats", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&MarlinProperties::isDoStats))},
	{"isForceNoRLE", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&MarlinProperties::isForceNoRLE))},
	{"isForceRLE", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&MarlinProperties::isForceRLE))},
	{"isLogCreateContext", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&MarlinProperties::isLogCreateContext))},
	{"isLogUnsafeMalloc", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&MarlinProperties::isLogUnsafeMalloc))},
	{"isLoggingEnabled", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&MarlinProperties::isLoggingEnabled))},
	{"isUseLogger", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&MarlinProperties::isUseLogger))},
	{"isUsePathSimplifier", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&MarlinProperties::isUsePathSimplifier))},
	{"isUseSimplifier", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&MarlinProperties::isUseSimplifier))},
	{"isUseThreadLocal", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&MarlinProperties::isUseThreadLocal))},
	{"isUseTileFlags", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&MarlinProperties::isUseTileFlags))},
	{"isUseTileFlagsWithHeuristics", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&MarlinProperties::isUseTileFlagsWithHeuristics))},
	{}
};

$ClassInfo _MarlinProperties_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.java2d.marlin.MarlinProperties",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MarlinProperties_MethodInfo_
};

$Object* allocate$MarlinProperties($Class* clazz) {
	return $of($alloc(MarlinProperties));
}

void MarlinProperties::init$() {
}

bool MarlinProperties::isUseThreadLocal() {
	return getBoolean("sun.java2d.renderer.useThreadLocal"_s, "true"_s);
}

int32_t MarlinProperties::getInitialEdges() {
	return align(getInteger("sun.java2d.renderer.edges"_s, 4096, 64, 64 * 1024), 64);
}

int32_t MarlinProperties::getInitialPixelWidth() {
	return align(getInteger("sun.java2d.renderer.pixelWidth"_s, 4096, 64, 32 * 1024), 64);
}

int32_t MarlinProperties::getInitialPixelHeight() {
	return align(getInteger("sun.java2d.renderer.pixelHeight"_s, 2176, 64, 32 * 1024), 64);
}

int32_t MarlinProperties::getSubPixel_Log2_X() {
	return getInteger("sun.java2d.renderer.subPixel_log2_X"_s, 8, 0, 8);
}

int32_t MarlinProperties::getSubPixel_Log2_Y() {
	return getInteger("sun.java2d.renderer.subPixel_log2_Y"_s, 3, 0, 8);
}

int32_t MarlinProperties::getTileSize_Log2() {
	return getInteger("sun.java2d.renderer.tileSize_log2"_s, 5, 3, 10);
}

int32_t MarlinProperties::getTileWidth_Log2() {
	return getInteger("sun.java2d.renderer.tileWidth_log2"_s, 5, 3, 10);
}

int32_t MarlinProperties::getBlockSize_Log2() {
	return getInteger("sun.java2d.renderer.blockSize_log2"_s, 5, 3, 8);
}

bool MarlinProperties::isForceRLE() {
	return getBoolean("sun.java2d.renderer.forceRLE"_s, "false"_s);
}

bool MarlinProperties::isForceNoRLE() {
	return getBoolean("sun.java2d.renderer.forceNoRLE"_s, "false"_s);
}

bool MarlinProperties::isUseTileFlags() {
	return getBoolean("sun.java2d.renderer.useTileFlags"_s, "true"_s);
}

bool MarlinProperties::isUseTileFlagsWithHeuristics() {
	bool var$0 = isUseTileFlags();
	return var$0 && getBoolean("sun.java2d.renderer.useTileFlags.useHeuristics"_s, "true"_s);
}

int32_t MarlinProperties::getRLEMinWidth() {
	return getInteger("sun.java2d.renderer.rleMinWidth"_s, 64, 0, $Integer::MAX_VALUE);
}

bool MarlinProperties::isUseSimplifier() {
	return getBoolean("sun.java2d.renderer.useSimplifier"_s, "false"_s);
}

bool MarlinProperties::isUsePathSimplifier() {
	return getBoolean("sun.java2d.renderer.usePathSimplifier"_s, "false"_s);
}

float MarlinProperties::getPathSimplifierPixelTolerance() {
	$init($MarlinConst);
	return getFloat("sun.java2d.renderer.pathSimplifier.pixTol"_s, (1.0f / $MarlinConst::MIN_SUBPIXELS), 0.001f, 10.0f);
}

bool MarlinProperties::isDoClip() {
	return getBoolean("sun.java2d.renderer.clip"_s, "true"_s);
}

bool MarlinProperties::isDoClipRuntimeFlag() {
	return getBoolean("sun.java2d.renderer.clip.runtime.enable"_s, "false"_s);
}

bool MarlinProperties::isDoClipAtRuntime() {
	return getBoolean("sun.java2d.renderer.clip.runtime"_s, "true"_s);
}

bool MarlinProperties::isDoClipSubdivider() {
	return getBoolean("sun.java2d.renderer.clip.subdivider"_s, "true"_s);
}

float MarlinProperties::getSubdividerMinLength() {
	$init($Float);
	return getFloat("sun.java2d.renderer.clip.subdivider.minLength"_s, 100.0f, $Float::NEGATIVE_INFINITY, $Float::POSITIVE_INFINITY);
}

bool MarlinProperties::isDoStats() {
	return getBoolean("sun.java2d.renderer.doStats"_s, "false"_s);
}

bool MarlinProperties::isDoMonitors() {
	return getBoolean("sun.java2d.renderer.doMonitors"_s, "false"_s);
}

bool MarlinProperties::isDoChecks() {
	return getBoolean("sun.java2d.renderer.doChecks"_s, "false"_s);
}

bool MarlinProperties::isLoggingEnabled() {
	return getBoolean("sun.java2d.renderer.log"_s, "false"_s);
}

bool MarlinProperties::isUseLogger() {
	return getBoolean("sun.java2d.renderer.useLogger"_s, "false"_s);
}

bool MarlinProperties::isLogCreateContext() {
	return getBoolean("sun.java2d.renderer.logCreateContext"_s, "false"_s);
}

bool MarlinProperties::isLogUnsafeMalloc() {
	return getBoolean("sun.java2d.renderer.logUnsafeMalloc"_s, "false"_s);
}

float MarlinProperties::getCurveLengthError() {
	return getFloat("sun.java2d.renderer.curve_len_err"_s, 0.01f, 1.0E-6f, 1.0f);
}

float MarlinProperties::getCubicDecD2() {
	return getFloat("sun.java2d.renderer.cubic_dec_d2"_s, 1.0f, 1.0E-5f, 4.0f);
}

float MarlinProperties::getCubicIncD1() {
	return getFloat("sun.java2d.renderer.cubic_inc_d1"_s, 0.2f, 1.0E-6f, 1.0f);
}

float MarlinProperties::getQuadDecD2() {
	return getFloat("sun.java2d.renderer.quad_dec_d2"_s, 0.5f, 1.0E-5f, 4.0f);
}

bool MarlinProperties::getBoolean($String* key, $String* def) {
	$load(MarlinProperties);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	return $nc($($Boolean::valueOf($cast($String, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, key, def))))))))->booleanValue();
}

int32_t MarlinProperties::getInteger($String* key, int32_t def, int32_t min, int32_t max) {
	$load(MarlinProperties);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, property, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, key)))));
	int32_t value = def;
	if (property != nullptr) {
		try {
			value = $nc($($Integer::decode(property)))->intValue();
		} catch ($NumberFormatException&) {
			$var($NumberFormatException, e, $catch());
			$MarlinUtils::logInfo($$str({"Invalid integer value for "_s, key, " = "_s, property}));
		}
	}
	if ((value < min) || (value > max)) {
		$MarlinUtils::logInfo($$str({"Invalid value for "_s, key, " = "_s, $$str(value), "; expected value in range["_s, $$str(min), ", "_s, $$str(max), "] !"_s}));
		value = def;
	}
	return value;
}

int32_t MarlinProperties::align(int32_t val, int32_t norm) {
	int32_t ceil = $FloatMath::ceil_int(((float)val) / norm);
	return ceil * norm;
}

double MarlinProperties::getDouble($String* key, double def, double min, double max) {
	$load(MarlinProperties);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	double value = def;
	$var($String, property, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, key)))));
	if (property != nullptr) {
		try {
			value = $Double::parseDouble(property);
		} catch ($NumberFormatException&) {
			$var($NumberFormatException, nfe, $catch());
			$MarlinUtils::logInfo($$str({"Invalid value for "_s, key, " = "_s, property, " !"_s}));
		}
	}
	if (value < min || value > max) {
		$MarlinUtils::logInfo($$str({"Invalid value for "_s, key, " = "_s, $$str(value), "; expect value in range["_s, $$str(min), ", "_s, $$str(max), "] !"_s}));
		value = def;
	}
	return value;
}

float MarlinProperties::getFloat($String* key, float def, float min, float max) {
	return (float)getDouble(key, def, min, max);
}

MarlinProperties::MarlinProperties() {
}

$Class* MarlinProperties::load$($String* name, bool initialize) {
	$loadClass(MarlinProperties, name, initialize, &_MarlinProperties_ClassInfo_, allocate$MarlinProperties);
	return class$;
}

$Class* MarlinProperties::class$ = nullptr;

		} // marlin
	} // java2d
} // sun