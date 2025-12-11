#include <java/awt/color/ICC_Profile.h>

#include <java/awt/color/CMMException.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/color/ICC_Profile$BuiltInProfile.h>
#include <java/awt/color/ICC_ProfileGray.h>
#include <java/awt/color/ICC_ProfileRGB.h>
#include <java/awt/color/ProfileDataException.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/io/FilePermission.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/StringTokenizer.h>
#include <sun/java2d/cmm/CMSManager.h>
#include <sun/java2d/cmm/PCMM.h>
#include <sun/java2d/cmm/Profile.h>
#include <sun/java2d/cmm/ProfileDataVerifier.h>
#include <sun/java2d/cmm/ProfileDeferralInfo.h>
#include <jcpp.h>

#undef CLASS_ABSTRACT
#undef CLASS_COLORSPACECONVERSION
#undef CLASS_DEVICELINK
#undef CLASS_DISPLAY
#undef CLASS_INPUT
#undef CLASS_NAMEDCOLOR
#undef CLASS_OUTPUT
#undef CS_CIEXYZ
#undef CS_GRAY
#undef CS_LINEAR_RGB
#undef CS_PYCC
#undef GRAY
#undef LRGB
#undef PYCC
#undef SRGB
#undef TYPE_2CLR
#undef TYPE_3CLR
#undef TYPE_4CLR
#undef TYPE_5CLR
#undef TYPE_6CLR
#undef TYPE_7CLR
#undef TYPE_8CLR
#undef TYPE_9CLR
#undef TYPE_ACLR
#undef TYPE_BCLR
#undef TYPE_CCLR
#undef TYPE_CMY
#undef TYPE_CMYK
#undef TYPE_DCLR
#undef TYPE_ECLR
#undef TYPE_FCLR
#undef TYPE_GRAY
#undef TYPE_HLS
#undef TYPE_HSV
#undef TYPE_RGB
#undef TYPE_XYZ
#undef XYZ

using $PermissionArray = $Array<::java::security::Permission>;
using $CMMException = ::java::awt::color::CMMException;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $ICC_Profile$BuiltInProfile = ::java::awt::color::ICC_Profile$BuiltInProfile;
using $ICC_ProfileGray = ::java::awt::color::ICC_ProfileGray;
using $ICC_ProfileRGB = ::java::awt::color::ICC_ProfileRGB;
using $ProfileDataException = ::java::awt::color::ProfileDataException;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $FilePermission = ::java::io::FilePermission;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $StringTokenizer = ::java::util::StringTokenizer;
using $CMSManager = ::sun::java2d::cmm::CMSManager;
using $PCMM = ::sun::java2d::cmm::PCMM;
using $Profile = ::sun::java2d::cmm::Profile;
using $ProfileDataVerifier = ::sun::java2d::cmm::ProfileDataVerifier;
using $ProfileDeferralInfo = ::sun::java2d::cmm::ProfileDeferralInfo;

namespace java {
	namespace awt {
		namespace color {

class ICC_Profile$$Lambda$lambda$getStandardProfileInputStream$0 : public $PrivilegedAction {
	$class(ICC_Profile$$Lambda$lambda$getStandardProfileInputStream$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($String* fileName) {
		$set(this, fileName, fileName);
	}
	virtual $Object* run() override {
		 return $of(ICC_Profile::lambda$getStandardProfileInputStream$0(fileName));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ICC_Profile$$Lambda$lambda$getStandardProfileInputStream$0>());
	}
	$String* fileName = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ICC_Profile$$Lambda$lambda$getStandardProfileInputStream$0::fieldInfos[2] = {
	{"fileName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ICC_Profile$$Lambda$lambda$getStandardProfileInputStream$0, fileName)},
	{}
};
$MethodInfo ICC_Profile$$Lambda$lambda$getStandardProfileInputStream$0::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ICC_Profile$$Lambda$lambda$getStandardProfileInputStream$0::*)($String*)>(&ICC_Profile$$Lambda$lambda$getStandardProfileInputStream$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ICC_Profile$$Lambda$lambda$getStandardProfileInputStream$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.awt.color.ICC_Profile$$Lambda$lambda$getStandardProfileInputStream$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* ICC_Profile$$Lambda$lambda$getStandardProfileInputStream$0::load$($String* name, bool initialize) {
	$loadClass(ICC_Profile$$Lambda$lambda$getStandardProfileInputStream$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ICC_Profile$$Lambda$lambda$getStandardProfileInputStream$0::class$ = nullptr;

$NamedAttribute ICC_Profile_Attribute_var$0[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _ICC_Profile_MethodAnnotations_finalize3[] = {
	{"Ljava/lang/Deprecated;", ICC_Profile_Attribute_var$0},
	{}
};

$FieldInfo _ICC_Profile_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ICC_Profile, serialVersionUID)},
	{"cmmProfile", "Lsun/java2d/cmm/Profile;", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(ICC_Profile, cmmProfile$)},
	{"deferralInfo", "Lsun/java2d/cmm/ProfileDeferralInfo;", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(ICC_Profile, deferralInfo)},
	{"CLASS_INPUT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, CLASS_INPUT)},
	{"CLASS_DISPLAY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, CLASS_DISPLAY)},
	{"CLASS_OUTPUT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, CLASS_OUTPUT)},
	{"CLASS_DEVICELINK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, CLASS_DEVICELINK)},
	{"CLASS_COLORSPACECONVERSION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, CLASS_COLORSPACECONVERSION)},
	{"CLASS_ABSTRACT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, CLASS_ABSTRACT)},
	{"CLASS_NAMEDCOLOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, CLASS_NAMEDCOLOR)},
	{"icSigXYZData", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigXYZData)},
	{"icSigLabData", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigLabData)},
	{"icSigLuvData", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigLuvData)},
	{"icSigYCbCrData", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigYCbCrData)},
	{"icSigYxyData", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigYxyData)},
	{"icSigRgbData", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigRgbData)},
	{"icSigGrayData", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigGrayData)},
	{"icSigHsvData", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigHsvData)},
	{"icSigHlsData", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigHlsData)},
	{"icSigCmykData", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigCmykData)},
	{"icSigCmyData", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigCmyData)},
	{"icSigSpace2CLR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigSpace2CLR)},
	{"icSigSpace3CLR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigSpace3CLR)},
	{"icSigSpace4CLR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigSpace4CLR)},
	{"icSigSpace5CLR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigSpace5CLR)},
	{"icSigSpace6CLR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigSpace6CLR)},
	{"icSigSpace7CLR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigSpace7CLR)},
	{"icSigSpace8CLR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigSpace8CLR)},
	{"icSigSpace9CLR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigSpace9CLR)},
	{"icSigSpaceACLR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigSpaceACLR)},
	{"icSigSpaceBCLR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigSpaceBCLR)},
	{"icSigSpaceCCLR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigSpaceCCLR)},
	{"icSigSpaceDCLR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigSpaceDCLR)},
	{"icSigSpaceECLR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigSpaceECLR)},
	{"icSigSpaceFCLR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigSpaceFCLR)},
	{"icSigInputClass", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigInputClass)},
	{"icSigDisplayClass", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigDisplayClass)},
	{"icSigOutputClass", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigOutputClass)},
	{"icSigLinkClass", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigLinkClass)},
	{"icSigAbstractClass", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigAbstractClass)},
	{"icSigColorSpaceClass", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigColorSpaceClass)},
	{"icSigNamedColorClass", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigNamedColorClass)},
	{"icPerceptual", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icPerceptual)},
	{"icRelativeColorimetric", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icRelativeColorimetric)},
	{"icMediaRelativeColorimetric", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icMediaRelativeColorimetric)},
	{"icSaturation", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSaturation)},
	{"icAbsoluteColorimetric", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icAbsoluteColorimetric)},
	{"icICCAbsoluteColorimetric", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icICCAbsoluteColorimetric)},
	{"icSigHead", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigHead)},
	{"icSigAToB0Tag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigAToB0Tag)},
	{"icSigAToB1Tag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigAToB1Tag)},
	{"icSigAToB2Tag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigAToB2Tag)},
	{"icSigBlueColorantTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigBlueColorantTag)},
	{"icSigBlueMatrixColumnTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigBlueMatrixColumnTag)},
	{"icSigBlueTRCTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigBlueTRCTag)},
	{"icSigBToA0Tag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigBToA0Tag)},
	{"icSigBToA1Tag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigBToA1Tag)},
	{"icSigBToA2Tag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigBToA2Tag)},
	{"icSigCalibrationDateTimeTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigCalibrationDateTimeTag)},
	{"icSigCharTargetTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigCharTargetTag)},
	{"icSigCopyrightTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigCopyrightTag)},
	{"icSigCrdInfoTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigCrdInfoTag)},
	{"icSigDeviceMfgDescTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigDeviceMfgDescTag)},
	{"icSigDeviceModelDescTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigDeviceModelDescTag)},
	{"icSigDeviceSettingsTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigDeviceSettingsTag)},
	{"icSigGamutTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigGamutTag)},
	{"icSigGrayTRCTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigGrayTRCTag)},
	{"icSigGreenColorantTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigGreenColorantTag)},
	{"icSigGreenMatrixColumnTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigGreenMatrixColumnTag)},
	{"icSigGreenTRCTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigGreenTRCTag)},
	{"icSigLuminanceTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigLuminanceTag)},
	{"icSigMeasurementTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigMeasurementTag)},
	{"icSigMediaBlackPointTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigMediaBlackPointTag)},
	{"icSigMediaWhitePointTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigMediaWhitePointTag)},
	{"icSigNamedColor2Tag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigNamedColor2Tag)},
	{"icSigOutputResponseTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigOutputResponseTag)},
	{"icSigPreview0Tag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigPreview0Tag)},
	{"icSigPreview1Tag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigPreview1Tag)},
	{"icSigPreview2Tag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigPreview2Tag)},
	{"icSigProfileDescriptionTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigProfileDescriptionTag)},
	{"icSigProfileSequenceDescTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigProfileSequenceDescTag)},
	{"icSigPs2CRD0Tag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigPs2CRD0Tag)},
	{"icSigPs2CRD1Tag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigPs2CRD1Tag)},
	{"icSigPs2CRD2Tag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigPs2CRD2Tag)},
	{"icSigPs2CRD3Tag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigPs2CRD3Tag)},
	{"icSigPs2CSATag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigPs2CSATag)},
	{"icSigPs2RenderingIntentTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigPs2RenderingIntentTag)},
	{"icSigRedColorantTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigRedColorantTag)},
	{"icSigRedMatrixColumnTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigRedMatrixColumnTag)},
	{"icSigRedTRCTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigRedTRCTag)},
	{"icSigScreeningDescTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigScreeningDescTag)},
	{"icSigScreeningTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigScreeningTag)},
	{"icSigTechnologyTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigTechnologyTag)},
	{"icSigUcrBgTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigUcrBgTag)},
	{"icSigViewingCondDescTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigViewingCondDescTag)},
	{"icSigViewingConditionsTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigViewingConditionsTag)},
	{"icSigChromaticityTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigChromaticityTag)},
	{"icSigChromaticAdaptationTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigChromaticAdaptationTag)},
	{"icSigColorantOrderTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigColorantOrderTag)},
	{"icSigColorantTableTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icSigColorantTableTag)},
	{"icHdrSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icHdrSize)},
	{"icHdrCmmId", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icHdrCmmId)},
	{"icHdrVersion", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icHdrVersion)},
	{"icHdrDeviceClass", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icHdrDeviceClass)},
	{"icHdrColorSpace", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icHdrColorSpace)},
	{"icHdrPcs", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icHdrPcs)},
	{"icHdrDate", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icHdrDate)},
	{"icHdrMagic", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icHdrMagic)},
	{"icHdrPlatform", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icHdrPlatform)},
	{"icHdrFlags", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icHdrFlags)},
	{"icHdrManufacturer", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icHdrManufacturer)},
	{"icHdrModel", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icHdrModel)},
	{"icHdrAttributes", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icHdrAttributes)},
	{"icHdrRenderingIntent", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icHdrRenderingIntent)},
	{"icHdrIlluminant", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icHdrIlluminant)},
	{"icHdrCreator", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icHdrCreator)},
	{"icHdrProfileID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icHdrProfileID)},
	{"icTagType", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icTagType)},
	{"icTagReserved", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icTagReserved)},
	{"icCurveCount", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icCurveCount)},
	{"icCurveData", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icCurveData)},
	{"icXYZNumberX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ICC_Profile, icXYZNumberX)},
	{"iccProfileSerializedDataVersion", "I", nullptr, $PRIVATE, $field(ICC_Profile, iccProfileSerializedDataVersion)},
	{"resolvedDeserializedProfile", "Ljava/awt/color/ICC_Profile;", nullptr, $PRIVATE | $TRANSIENT, $field(ICC_Profile, resolvedDeserializedProfile)},
	{}
};

$MethodInfo _ICC_Profile_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/cmm/Profile;)V", nullptr, 0, $method(static_cast<void(ICC_Profile::*)($Profile*)>(&ICC_Profile::init$))},
	{"<init>", "(Lsun/java2d/cmm/ProfileDeferralInfo;)V", nullptr, 0, $method(static_cast<void(ICC_Profile::*)($ProfileDeferralInfo*)>(&ICC_Profile::init$))},
	{"cmmProfile", "()Lsun/java2d/cmm/Profile;", nullptr, $PRIVATE, $method(static_cast<$Profile*(ICC_Profile::*)()>(&ICC_Profile::cmmProfile))},
	{"finalize", "()V", nullptr, $PROTECTED | $DEPRECATED, nullptr, nullptr, nullptr, _ICC_Profile_MethodAnnotations_finalize3},
	{"getColorSpaceType", "()I", nullptr, $PUBLIC},
	{"getColorSpaceType", "(Lsun/java2d/cmm/Profile;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($Profile*)>(&ICC_Profile::getColorSpaceType))},
	{"getData", "()[B", nullptr, $PUBLIC},
	{"getData", "(I)[B", nullptr, $PUBLIC},
	{"getData", "(Lsun/java2d/cmm/Profile;I)[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)($Profile*,int32_t)>(&ICC_Profile::getData))},
	{"getGamma", "(I)F", nullptr, 0},
	{"getInstance", "([B)Ljava/awt/color/ICC_Profile;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ICC_Profile*(*)($bytes*)>(&ICC_Profile::getInstance))},
	{"getInstance", "(I)Ljava/awt/color/ICC_Profile;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ICC_Profile*(*)(int32_t)>(&ICC_Profile::getInstance))},
	{"getInstance", "(Ljava/lang/String;)Ljava/awt/color/ICC_Profile;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ICC_Profile*(*)($String*)>(&ICC_Profile::getInstance)), "java.io.IOException"},
	{"getInstance", "(Ljava/io/InputStream;)Ljava/awt/color/ICC_Profile;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ICC_Profile*(*)($InputStream*)>(&ICC_Profile::getInstance)), "java.io.IOException"},
	{"getMajorVersion", "()I", nullptr, $PUBLIC},
	{"getMediaWhitePoint", "()[F", nullptr, 0},
	{"getMinorVersion", "()I", nullptr, $PUBLIC},
	{"getNumComponents", "()I", nullptr, $PUBLIC},
	{"getPCSType", "()I", nullptr, $PUBLIC},
	{"getProfileClass", "()I", nullptr, $PUBLIC},
	{"getProfileDataFromStream", "(Ljava/io/InputStream;)[B", nullptr, $STATIC, $method(static_cast<$bytes*(*)($InputStream*)>(&ICC_Profile::getProfileDataFromStream)), "java.io.IOException"},
	{"getProfileFile", "(Ljava/lang/String;)Ljava/io/File;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$File*(*)($String*)>(&ICC_Profile::getProfileFile))},
	{"getStandardProfileInputStream", "(Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$InputStream*(*)($String*)>(&ICC_Profile::getStandardProfileInputStream))},
	{"getTRC", "(I)[S", nullptr, 0},
	{"getXYZTag", "(I)[F", nullptr, $FINAL, $method(static_cast<$floats*(ICC_Profile::*)(int32_t)>(&ICC_Profile::getXYZTag))},
	{"iccCStoJCS", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&ICC_Profile::iccCStoJCS))},
	{"intFromBigEndian", "([BI)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($bytes*,int32_t)>(&ICC_Profile::intFromBigEndian))},
	{"isChildOf", "(Ljava/io/File;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($File*,$String*)>(&ICC_Profile::isChildOf))},
	{"lambda$getStandardProfileInputStream$0", "(Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$InputStream*(*)($String*)>(&ICC_Profile::lambda$getStandardProfileInputStream$0))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ICC_Profile::*)($ObjectInputStream*)>(&ICC_Profile::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "java.io.ObjectStreamException"},
	{"setData", "(I[B)V", nullptr, $PUBLIC},
	{"shortFromBigEndian", "([BI)S", nullptr, $PRIVATE | $STATIC, $method(static_cast<int16_t(*)($bytes*,int32_t)>(&ICC_Profile::shortFromBigEndian))},
	{"write", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ICC_Profile::*)($ObjectOutputStream*)>(&ICC_Profile::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _ICC_Profile_InnerClassesInfo_[] = {
	{"java.awt.color.ICC_Profile$BuiltInProfile", "java.awt.color.ICC_Profile", "BuiltInProfile", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ICC_Profile_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.color.ICC_Profile",
	"java.lang.Object",
	"java.io.Serializable",
	_ICC_Profile_FieldInfo_,
	_ICC_Profile_MethodInfo_,
	nullptr,
	nullptr,
	_ICC_Profile_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.color.ICC_Profile$BuiltInProfile"
};

$Object* allocate$ICC_Profile($Class* clazz) {
	return $of($alloc(ICC_Profile));
}

void ICC_Profile::init$($Profile* p) {
	this->iccProfileSerializedDataVersion = 1;
	$set(this, cmmProfile$, p);
}

void ICC_Profile::init$($ProfileDeferralInfo* pdi) {
	this->iccProfileSerializedDataVersion = 1;
	$set(this, deferralInfo, pdi);
}

void ICC_Profile::finalize() {
}

ICC_Profile* ICC_Profile::getInstance($bytes* data) {
	$init(ICC_Profile);
	$useLocalCurrentObjectStackCache();
	$ProfileDataVerifier::verify(data);
	$var($Profile, p, nullptr);
	try {
		$assign(p, $nc($($CMSManager::getModule()))->loadProfile(data));
	} catch ($CMMException& c) {
		$throwNew($IllegalArgumentException, "Invalid ICC Profile Data"_s);
	}
	try {
		bool var$1 = getColorSpaceType(p) == $ColorSpace::TYPE_GRAY;
		bool var$0 = var$1 && getData(p, ICC_Profile::icSigMediaWhitePointTag) != nullptr;
		if (var$0 && getData(p, ICC_Profile::icSigGrayTRCTag) != nullptr) {
			return $new($ICC_ProfileGray, p);
		}
		bool var$8 = getColorSpaceType(p) == $ColorSpace::TYPE_RGB;
		bool var$7 = var$8 && getData(p, ICC_Profile::icSigMediaWhitePointTag) != nullptr;
		bool var$6 = var$7 && getData(p, ICC_Profile::icSigRedColorantTag) != nullptr;
		bool var$5 = var$6 && getData(p, ICC_Profile::icSigGreenColorantTag) != nullptr;
		bool var$4 = var$5 && getData(p, ICC_Profile::icSigBlueColorantTag) != nullptr;
		bool var$3 = var$4 && getData(p, ICC_Profile::icSigRedTRCTag) != nullptr;
		bool var$2 = var$3 && getData(p, ICC_Profile::icSigGreenTRCTag) != nullptr;
		if (var$2 && getData(p, ICC_Profile::icSigBlueTRCTag) != nullptr) {
			return $new($ICC_ProfileRGB, p);
		}
	} catch ($CMMException& c) {
	}
	return $new(ICC_Profile, p);
}

ICC_Profile* ICC_Profile::getInstance(int32_t cspace) {
	$init(ICC_Profile);

	$var(ICC_Profile, var$0, nullptr)
	switch (cspace) {
	case $ColorSpace::CS_sRGB:
		{
			$init($ICC_Profile$BuiltInProfile);
			$assign(var$0, $ICC_Profile$BuiltInProfile::SRGB);
			break;
		}
	case $ColorSpace::CS_LINEAR_RGB:
		{
			$init($ICC_Profile$BuiltInProfile);
			$assign(var$0, $ICC_Profile$BuiltInProfile::LRGB);
			break;
		}
	case $ColorSpace::CS_CIEXYZ:
		{
			$init($ICC_Profile$BuiltInProfile);
			$assign(var$0, $ICC_Profile$BuiltInProfile::XYZ);
			break;
		}
	case $ColorSpace::CS_PYCC:
		{
			$init($ICC_Profile$BuiltInProfile);
			$assign(var$0, $ICC_Profile$BuiltInProfile::PYCC);
			break;
		}
	case $ColorSpace::CS_GRAY:
		{
			$init($ICC_Profile$BuiltInProfile);
			$assign(var$0, $ICC_Profile$BuiltInProfile::GRAY);
			break;
		}
	default:
		{
			{
				$throwNew($IllegalArgumentException, "Unknown color space"_s);
			}
		}
	}
	return var$0;
}

ICC_Profile* ICC_Profile::getInstance($String* fileName) {
	$init(ICC_Profile);
	$useLocalCurrentObjectStackCache();
	$var($InputStream, is, nullptr);
	$var($File, f, getProfileFile(fileName));
	if (f != nullptr) {
		$assign(is, $new($FileInputStream, f));
	} else {
		$assign(is, getStandardProfileInputStream(fileName));
	}
	if (is == nullptr) {
		$throwNew($IOException, $$str({"Cannot open file "_s, fileName}));
	}
	{
		$var($InputStream, twrVar0$, is);
		{
			$var($Throwable, var$0, nullptr);
			$var(ICC_Profile, var$2, nullptr);
			bool return$1 = false;
			try {
				try {
					$assign(var$2, getInstance(is));
					return$1 = true;
					goto $finally;
				} catch ($Throwable& t$) {
					if (twrVar0$ != nullptr) {
						try {
							twrVar0$->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} $finally: {
				if (twrVar0$ != nullptr) {
					twrVar0$->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	$shouldNotReachHere();
}

ICC_Profile* ICC_Profile::getInstance($InputStream* s) {
	$init(ICC_Profile);
	return getInstance($(getProfileDataFromStream(s)));
}

$bytes* ICC_Profile::getProfileDataFromStream($InputStream* s) {
	$init(ICC_Profile);
	$useLocalCurrentObjectStackCache();
	$var($BufferedInputStream, bis, $new($BufferedInputStream, s));
	bis->mark(128);
	$var($bytes, header, bis->readNBytes(128));
	if ($nc(header)->length < 128 || $nc(header)->get(36) != 97 || $nc(header)->get(37) != 99 || $nc(header)->get(38) != 115 || $nc(header)->get(39) != 112) {
		return nullptr;
	}
	int32_t profileSize = intFromBigEndian(header, 0);
	bis->reset();
	try {
		return bis->readNBytes(profileSize);
	} catch ($OutOfMemoryError& e) {
		$throwNew($IOException, "Color profile is too big"_s);
	}
	$shouldNotReachHere();
}

$Profile* ICC_Profile::cmmProfile() {
	$useLocalCurrentObjectStackCache();
	$var($Profile, p, this->cmmProfile$);
	if (p != nullptr) {
		return p;
	}
	$synchronized(this) {
		if (this->cmmProfile$ != nullptr) {
			return this->cmmProfile$;
		}
		$var($InputStream, is, getStandardProfileInputStream($nc(this->deferralInfo)->filename));
		if (is == nullptr) {
			return nullptr;
		}
		try {
			$var($InputStream, twrVar0$, is);
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$var($bytes, data, getProfileDataFromStream(is));
						if (data != nullptr) {
							$assign(p, ($set(this, cmmProfile$, $nc($($CMSManager::getModule()))->loadProfile(data))));
							$set(this, deferralInfo, nullptr);
						}
					} catch ($Throwable& t$) {
						if (twrVar0$ != nullptr) {
							try {
								twrVar0$->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					if (twrVar0$ != nullptr) {
						twrVar0$->close();
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		} catch ($CMMException& ignore) {
		} catch ($IOException& ignore) {
		}
	}
	return p;
}

int32_t ICC_Profile::getMajorVersion() {
	return $nc($(getData(ICC_Profile::icSigHead)))->get(8);
}

int32_t ICC_Profile::getMinorVersion() {
	return $nc($(getData(ICC_Profile::icSigHead)))->get(9);
}

int32_t ICC_Profile::getProfileClass() {
	$useLocalCurrentObjectStackCache();
	$var($ProfileDeferralInfo, info, this->deferralInfo);
	if (info != nullptr) {
		return info->profileClass;
	}
	$var($bytes, theHeader, getData(ICC_Profile::icSigHead));
	int32_t theClassSig = intFromBigEndian(theHeader, ICC_Profile::icHdrDeviceClass);

	int32_t var$0 = 0;
	switch (theClassSig) {
	case ICC_Profile::icSigInputClass:
		{
			var$0 = ICC_Profile::CLASS_INPUT;
			break;
		}
	case ICC_Profile::icSigDisplayClass:
		{
			var$0 = ICC_Profile::CLASS_DISPLAY;
			break;
		}
	case ICC_Profile::icSigOutputClass:
		{
			var$0 = ICC_Profile::CLASS_OUTPUT;
			break;
		}
	case ICC_Profile::icSigLinkClass:
		{
			var$0 = ICC_Profile::CLASS_DEVICELINK;
			break;
		}
	case ICC_Profile::icSigColorSpaceClass:
		{
			var$0 = ICC_Profile::CLASS_COLORSPACECONVERSION;
			break;
		}
	case ICC_Profile::icSigAbstractClass:
		{
			var$0 = ICC_Profile::CLASS_ABSTRACT;
			break;
		}
	case ICC_Profile::icSigNamedColorClass:
		{
			var$0 = ICC_Profile::CLASS_NAMEDCOLOR;
			break;
		}
	default:
		{
			{
				$throwNew($IllegalArgumentException, "Unknown profile class"_s);
			}
		}
	}
	return var$0;
}

int32_t ICC_Profile::getColorSpaceType() {
	$useLocalCurrentObjectStackCache();
	$var($ProfileDeferralInfo, info, this->deferralInfo);
	if (info != nullptr) {
		return info->colorSpaceType;
	}
	return getColorSpaceType($(cmmProfile()));
}

int32_t ICC_Profile::getColorSpaceType($Profile* p) {
	$init(ICC_Profile);
	$var($bytes, theHeader, getData(p, ICC_Profile::icSigHead));
	int32_t theColorSpaceSig = intFromBigEndian(theHeader, ICC_Profile::icHdrColorSpace);
	return iccCStoJCS(theColorSpaceSig);
}

int32_t ICC_Profile::getPCSType() {
	$var($bytes, theHeader, getData(ICC_Profile::icSigHead));
	int32_t thePCSSig = intFromBigEndian(theHeader, ICC_Profile::icHdrPcs);
	return iccCStoJCS(thePCSSig);
}

void ICC_Profile::write($String* fileName) {
	$useLocalCurrentObjectStackCache();
	{
		$var($OutputStream, out, $new($FileOutputStream, fileName));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					write(out);
				} catch ($Throwable& t$) {
					try {
						out->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				out->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void ICC_Profile::write($OutputStream* s) {
	$nc(s)->write($(getData()));
}

$bytes* ICC_Profile::getData() {
	$useLocalCurrentObjectStackCache();
	return $nc($($CMSManager::getModule()))->getProfileData($(cmmProfile()));
}

$bytes* ICC_Profile::getData(int32_t tagSignature) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, t, getData($(cmmProfile()), tagSignature));
	return t != nullptr ? $cast($bytes, $nc(t)->clone()) : ($bytes*)nullptr;
}

$bytes* ICC_Profile::getData($Profile* p, int32_t tagSignature) {
	$init(ICC_Profile);
	try {
		return $nc($($CMSManager::getModule()))->getTagData(p, tagSignature);
	} catch ($CMMException& c) {
		return nullptr;
	}
	$shouldNotReachHere();
}

void ICC_Profile::setData(int32_t tagSignature, $bytes* tagData) {
	$useLocalCurrentObjectStackCache();
	$nc($($CMSManager::getModule()))->setTagData($(cmmProfile()), tagSignature, tagData);
}

int32_t ICC_Profile::getNumComponents() {
	$useLocalCurrentObjectStackCache();
	$var($ProfileDeferralInfo, info, this->deferralInfo);
	if (info != nullptr) {
		return info->numComponents;
	}
	$var($bytes, theHeader, getData(ICC_Profile::icSigHead));
	int32_t theColorSpaceSig = intFromBigEndian(theHeader, ICC_Profile::icHdrColorSpace);

	int32_t var$0 = 0;
	switch (theColorSpaceSig) {
	case ICC_Profile::icSigGrayData:
		{
			var$0 = 1;
			break;
		}
	case ICC_Profile::icSigSpace2CLR:
		{
			var$0 = 2;
			break;
		}
	case ICC_Profile::icSigXYZData:
		{}
	case ICC_Profile::icSigLabData:
		{}
	case ICC_Profile::icSigLuvData:
		{}
	case ICC_Profile::icSigYCbCrData:
		{}
	case ICC_Profile::icSigYxyData:
		{}
	case ICC_Profile::icSigRgbData:
		{}
	case ICC_Profile::icSigHsvData:
		{}
	case ICC_Profile::icSigHlsData:
		{}
	case ICC_Profile::icSigCmyData:
		{}
	case ICC_Profile::icSigSpace3CLR:
		{
			var$0 = 3;
			break;
		}
	case ICC_Profile::icSigCmykData:
		{}
	case ICC_Profile::icSigSpace4CLR:
		{
			var$0 = 4;
			break;
		}
	case ICC_Profile::icSigSpace5CLR:
		{
			var$0 = 5;
			break;
		}
	case ICC_Profile::icSigSpace6CLR:
		{
			var$0 = 6;
			break;
		}
	case ICC_Profile::icSigSpace7CLR:
		{
			var$0 = 7;
			break;
		}
	case ICC_Profile::icSigSpace8CLR:
		{
			var$0 = 8;
			break;
		}
	case ICC_Profile::icSigSpace9CLR:
		{
			var$0 = 9;
			break;
		}
	case ICC_Profile::icSigSpaceACLR:
		{
			var$0 = 10;
			break;
		}
	case ICC_Profile::icSigSpaceBCLR:
		{
			var$0 = 11;
			break;
		}
	case ICC_Profile::icSigSpaceCCLR:
		{
			var$0 = 12;
			break;
		}
	case ICC_Profile::icSigSpaceDCLR:
		{
			var$0 = 13;
			break;
		}
	case ICC_Profile::icSigSpaceECLR:
		{
			var$0 = 14;
			break;
		}
	case ICC_Profile::icSigSpaceFCLR:
		{
			var$0 = 15;
			break;
		}
	default:
		{
			{
				$throwNew($ProfileDataException, "invalid ICC color space"_s);
			}
		}
	}
	return var$0;
}

$floats* ICC_Profile::getMediaWhitePoint() {
	return getXYZTag(ICC_Profile::icSigMediaWhitePointTag);
}

$floats* ICC_Profile::getXYZTag(int32_t tagSignature) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, theData, getData(tagSignature));
	$var($floats, theXYZNumber, $new($floats, 3));
	{
		int32_t i1 = 0;
		int32_t i2 = ICC_Profile::icXYZNumberX;
		for (; i1 < 3; ++i1, i2 += 4) {
			int32_t theS15Fixed16 = intFromBigEndian(theData, i2);
			theXYZNumber->set(i1, ((float)theS15Fixed16) / 65536.0f);
		}
	}
	return theXYZNumber;
}

float ICC_Profile::getGamma(int32_t tagSignature) {
	$var($bytes, theTRCData, getData(tagSignature));
	if (intFromBigEndian(theTRCData, ICC_Profile::icCurveCount) != 1) {
		$throwNew($ProfileDataException, "TRC is not a gamma"_s);
	}
	int32_t theU8Fixed8 = (int32_t)(shortFromBigEndian(theTRCData, ICC_Profile::icCurveData) & (uint32_t)0x0000FFFF);
	return theU8Fixed8 / 256.0f;
}

$shorts* ICC_Profile::getTRC(int32_t tagSignature) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, theTRCData, getData(tagSignature));
	int32_t nElements = intFromBigEndian(theTRCData, ICC_Profile::icCurveCount);
	if (nElements == 1) {
		$throwNew($ProfileDataException, "TRC is not a table"_s);
	}
	$var($shorts, theTRC, $new($shorts, nElements));
	{
		int32_t i1 = 0;
		int32_t i2 = ICC_Profile::icCurveData;
		for (; i1 < nElements; ++i1, i2 += 2) {
			theTRC->set(i1, shortFromBigEndian(theTRCData, i2));
		}
	}
	return theTRC;
}

int32_t ICC_Profile::iccCStoJCS(int32_t theColorSpaceSig) {
	$init(ICC_Profile);

	int32_t var$0 = 0;
	switch (theColorSpaceSig) {
	case ICC_Profile::icSigXYZData:
		{
			var$0 = $ColorSpace::TYPE_XYZ;
			break;
		}
	case ICC_Profile::icSigLabData:
		{
			var$0 = $ColorSpace::TYPE_Lab;
			break;
		}
	case ICC_Profile::icSigLuvData:
		{
			var$0 = $ColorSpace::TYPE_Luv;
			break;
		}
	case ICC_Profile::icSigYCbCrData:
		{
			var$0 = $ColorSpace::TYPE_YCbCr;
			break;
		}
	case ICC_Profile::icSigYxyData:
		{
			var$0 = $ColorSpace::TYPE_Yxy;
			break;
		}
	case ICC_Profile::icSigRgbData:
		{
			var$0 = $ColorSpace::TYPE_RGB;
			break;
		}
	case ICC_Profile::icSigGrayData:
		{
			var$0 = $ColorSpace::TYPE_GRAY;
			break;
		}
	case ICC_Profile::icSigHsvData:
		{
			var$0 = $ColorSpace::TYPE_HSV;
			break;
		}
	case ICC_Profile::icSigHlsData:
		{
			var$0 = $ColorSpace::TYPE_HLS;
			break;
		}
	case ICC_Profile::icSigCmykData:
		{
			var$0 = $ColorSpace::TYPE_CMYK;
			break;
		}
	case ICC_Profile::icSigCmyData:
		{
			var$0 = $ColorSpace::TYPE_CMY;
			break;
		}
	case ICC_Profile::icSigSpace2CLR:
		{
			var$0 = $ColorSpace::TYPE_2CLR;
			break;
		}
	case ICC_Profile::icSigSpace3CLR:
		{
			var$0 = $ColorSpace::TYPE_3CLR;
			break;
		}
	case ICC_Profile::icSigSpace4CLR:
		{
			var$0 = $ColorSpace::TYPE_4CLR;
			break;
		}
	case ICC_Profile::icSigSpace5CLR:
		{
			var$0 = $ColorSpace::TYPE_5CLR;
			break;
		}
	case ICC_Profile::icSigSpace6CLR:
		{
			var$0 = $ColorSpace::TYPE_6CLR;
			break;
		}
	case ICC_Profile::icSigSpace7CLR:
		{
			var$0 = $ColorSpace::TYPE_7CLR;
			break;
		}
	case ICC_Profile::icSigSpace8CLR:
		{
			var$0 = $ColorSpace::TYPE_8CLR;
			break;
		}
	case ICC_Profile::icSigSpace9CLR:
		{
			var$0 = $ColorSpace::TYPE_9CLR;
			break;
		}
	case ICC_Profile::icSigSpaceACLR:
		{
			var$0 = $ColorSpace::TYPE_ACLR;
			break;
		}
	case ICC_Profile::icSigSpaceBCLR:
		{
			var$0 = $ColorSpace::TYPE_BCLR;
			break;
		}
	case ICC_Profile::icSigSpaceCCLR:
		{
			var$0 = $ColorSpace::TYPE_CCLR;
			break;
		}
	case ICC_Profile::icSigSpaceDCLR:
		{
			var$0 = $ColorSpace::TYPE_DCLR;
			break;
		}
	case ICC_Profile::icSigSpaceECLR:
		{
			var$0 = $ColorSpace::TYPE_ECLR;
			break;
		}
	case ICC_Profile::icSigSpaceFCLR:
		{
			var$0 = $ColorSpace::TYPE_FCLR;
			break;
		}
	default:
		{
			{
				$throwNew($IllegalArgumentException, "Unknown color space"_s);
			}
		}
	}
	return var$0;
}

int32_t ICC_Profile::intFromBigEndian($bytes* array, int32_t index) {
	$init(ICC_Profile);
	return ((((((int32_t)($nc(array)->get(index) & (uint32_t)255)) << 24) | (((int32_t)(array->get(index + 1) & (uint32_t)255)) << 16)) | (((int32_t)(array->get(index + 2) & (uint32_t)255)) << 8)) | ((int32_t)(array->get(index + 3) & (uint32_t)255)));
}

int16_t ICC_Profile::shortFromBigEndian($bytes* array, int32_t index) {
	$init(ICC_Profile);
	return (int16_t)((((int32_t)($nc(array)->get(index) & (uint32_t)255)) << 8) | ((int32_t)(array->get(index + 1) & (uint32_t)255)));
}

$File* ICC_Profile::getProfileFile($String* fileName) {
	$init(ICC_Profile);
	$useLocalCurrentObjectStackCache();
	$var($File, f, $new($File, fileName));
	if (f->isAbsolute()) {
		return f->isFile() ? f : ($File*)nullptr;
	}
	$var($String, path, nullptr);
	$var($String, dir, nullptr);
	$var($String, fullPath, nullptr);
	bool var$0 = !f->isFile();
	if (var$0 && ($assign(path, $System::getProperty("java.iccprofile.path"_s))) != nullptr) {
		$var($StringTokenizer, st, $new($StringTokenizer, path, $File::pathSeparator));
		while (true) {
			bool var$1 = st->hasMoreTokens();
			if (!(var$1 && ((f == nullptr) || (!$nc(f)->isFile())))) {
				break;
			}
			{
				$assign(dir, st->nextToken());
				$assign(fullPath, $str({dir, $$str($File::separatorChar), fileName}));
				$assign(f, $new($File, fullPath));
				if (!isChildOf(f, dir)) {
					$assign(f, nullptr);
				}
			}
		}
	}
	bool var$2 = (f == nullptr || !$nc(f)->isFile());
	if (var$2 && ($assign(path, $System::getProperty("java.class.path"_s))) != nullptr) {
		$var($StringTokenizer, st, $new($StringTokenizer, path, $File::pathSeparator));
		while (true) {
			bool var$3 = st->hasMoreTokens();
			if (!(var$3 && ((f == nullptr) || (!f->isFile())))) {
				break;
			}
			{
				$assign(dir, st->nextToken());
				$assign(fullPath, $str({dir, $$str($File::separatorChar), fileName}));
				$assign(f, $new($File, fullPath));
			}
		}
	}
	if (f != nullptr && !f->isFile()) {
		$assign(f, nullptr);
	}
	return f;
}

$InputStream* ICC_Profile::getStandardProfileInputStream($String* fileName) {
	$init(ICC_Profile);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($PrivilegedAction, var$0, static_cast<$PrivilegedAction*>($new(ICC_Profile$$Lambda$lambda$getStandardProfileInputStream$0, fileName)));
	return $cast($InputStream, $AccessController::doPrivileged(var$0, ($AccessControlContext*)nullptr, $$new($PermissionArray, {
		static_cast<$Permission*>($$new($FilePermission, "<<ALL FILES>>"_s, "read"_s)),
		static_cast<$Permission*>($$new($RuntimePermission, "accessSystemModules"_s))
	})));
}

bool ICC_Profile::isChildOf($File* f, $String* dirName) {
	$init(ICC_Profile);
	$useLocalCurrentObjectStackCache();
	try {
		$var($File, dir, $new($File, dirName));
		$var($String, canonicalDirName, dir->getCanonicalPath());
		if (!$nc(canonicalDirName)->endsWith($File::separator)) {
			$plusAssign(canonicalDirName, $File::separator);
		}
		$var($String, canonicalFileName, $nc(f)->getCanonicalPath());
		return $nc(canonicalFileName)->startsWith(canonicalDirName);
	} catch ($IOException& e) {
		return false;
	}
	$shouldNotReachHere();
}

void ICC_Profile::writeObject($ObjectOutputStream* s) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->defaultWriteObject();
	$var($String, csName, nullptr);
	$init($ICC_Profile$BuiltInProfile);
	if (this == $ICC_Profile$BuiltInProfile::SRGB) {
		$assign(csName, "CS_sRGB"_s);
	} else {
		if (this == $ICC_Profile$BuiltInProfile::XYZ) {
			$assign(csName, "CS_CIEXYZ"_s);
		} else {
			if (this == $ICC_Profile$BuiltInProfile::PYCC) {
				$assign(csName, "CS_PYCC"_s);
			} else {
				if (this == $ICC_Profile$BuiltInProfile::GRAY) {
					$assign(csName, "CS_GRAY"_s);
				} else {
					if (this == $ICC_Profile$BuiltInProfile::LRGB) {
						$assign(csName, "CS_LINEAR_RGB"_s);
					}
				}
			}
		}
	}
	$var($bytes, data, nullptr);
	if (csName == nullptr) {
		$assign(data, getData());
	}
	s->writeObject(csName);
	s->writeObject(data);
}

void ICC_Profile::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->defaultReadObject();
	$var($String, csName, $cast($String, s->readObject()));
	$var($bytes, data, $cast($bytes, s->readObject()));
	int32_t cspace = 0;
	bool isKnownPredefinedCS = false;
	if (csName != nullptr) {
		isKnownPredefinedCS = true;
		if (csName->equals("CS_sRGB"_s)) {
			cspace = $ColorSpace::CS_sRGB;
		} else if (csName->equals("CS_CIEXYZ"_s)) {
			cspace = $ColorSpace::CS_CIEXYZ;
		} else if (csName->equals("CS_PYCC"_s)) {
			cspace = $ColorSpace::CS_PYCC;
		} else if (csName->equals("CS_GRAY"_s)) {
			cspace = $ColorSpace::CS_GRAY;
		} else if (csName->equals("CS_LINEAR_RGB"_s)) {
			cspace = $ColorSpace::CS_LINEAR_RGB;
		} else {
			isKnownPredefinedCS = false;
		}
	}
	if (isKnownPredefinedCS) {
		$set(this, resolvedDeserializedProfile, getInstance(cspace));
	} else {
		$set(this, resolvedDeserializedProfile, getInstance(data));
	}
}

$Object* ICC_Profile::readResolve() {
	return $of(this->resolvedDeserializedProfile);
}

$InputStream* ICC_Profile::lambda$getStandardProfileInputStream$0($String* fileName) {
	$init(ICC_Profile);
	$beforeCallerSensitive();
	$load($PCMM);
	return $PCMM::class$->getResourceAsStream($$str({"profiles/"_s, fileName}));
}

ICC_Profile::ICC_Profile() {
}

$Class* ICC_Profile::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ICC_Profile$$Lambda$lambda$getStandardProfileInputStream$0::classInfo$.name)) {
			return ICC_Profile$$Lambda$lambda$getStandardProfileInputStream$0::load$(name, initialize);
		}
	}
	$loadClass(ICC_Profile, name, initialize, &_ICC_Profile_ClassInfo_, allocate$ICC_Profile);
	return class$;
}

$Class* ICC_Profile::class$ = nullptr;

		} // color
	} // awt
} // java