#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import apache.thrift.metadata.thrift_types as _fbthrift_metadata


import apache.thrift.type.standard.thrift_metadata

import facebook.thrift.annotation.cpp.thrift_metadata

import facebook.thrift.annotation.scope.thrift_metadata

import facebook.thrift.annotation.thrift.thrift_metadata

# TODO (ffrancet): This general pattern can be optimized by using tuples and dicts
# instead of re-generating thrift structs
def _fbthrift_gen_metadata_struct_GeneratePatch(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "patch.GeneratePatch"

    if qualified_name in metadata_struct.structs:
        return metadata_struct
    fields = [
    ]
    struct_dict = dict(metadata_struct.structs)
    struct_dict[qualified_name] = _fbthrift_metadata.ThriftStruct(name=qualified_name, fields=fields,
        is_union=False,
        structured_annotations=[
            _fbthrift_metadata.ThriftConstStruct(type=_fbthrift_metadata.ThriftStructType(name="scope.Program"), fields= {  }),
            _fbthrift_metadata.ThriftConstStruct(type=_fbthrift_metadata.ThriftStructType(name="scope.Structured"), fields= {  }),
        ])
    new_struct = metadata_struct(structs=struct_dict)


    return new_struct
def gen_metadata_struct_GeneratePatch() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_struct_GeneratePatch(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))

# TODO (ffrancet): This general pattern can be optimized by using tuples and dicts
# instead of re-generating thrift structs
def _fbthrift_gen_metadata_struct_BoolPatch(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "patch.BoolPatch"

    if qualified_name in metadata_struct.structs:
        return metadata_struct
    fields = [
        _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BOOL_TYPE), name="assign", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=2, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BOOL_TYPE), name="clear", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=9, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BOOL_TYPE), name="invert", is_optional=False, structured_annotations=[
        ]),
    ]
    struct_dict = dict(metadata_struct.structs)
    struct_dict[qualified_name] = _fbthrift_metadata.ThriftStruct(name=qualified_name, fields=fields,
        is_union=False,
        structured_annotations=[
            _fbthrift_metadata.ThriftConstStruct(type=_fbthrift_metadata.ThriftStructType(name="cpp.Adapter"), fields= { "underlyingName": _fbthrift_metadata.ThriftConstValue(cv_string="BoolPatchStruct"), "extraNamespace": _fbthrift_metadata.ThriftConstValue(cv_string=""), "name": _fbthrift_metadata.ThriftConstValue(cv_string="::apache::thrift::op::detail::BoolPatchAdapter"),  }),
        ])
    new_struct = metadata_struct(structs=struct_dict)

     # assign
     # clear
     # invert

    return new_struct
def gen_metadata_struct_BoolPatch() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_struct_BoolPatch(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))

# TODO (ffrancet): This general pattern can be optimized by using tuples and dicts
# instead of re-generating thrift structs
def _fbthrift_gen_metadata_struct_BytePatch(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "patch.BytePatch"

    if qualified_name in metadata_struct.structs:
        return metadata_struct
    fields = [
        _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BYTE_TYPE), name="assign", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=2, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BOOL_TYPE), name="clear", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=8, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BYTE_TYPE), name="add", is_optional=False, structured_annotations=[
        ]),
    ]
    struct_dict = dict(metadata_struct.structs)
    struct_dict[qualified_name] = _fbthrift_metadata.ThriftStruct(name=qualified_name, fields=fields,
        is_union=False,
        structured_annotations=[
            _fbthrift_metadata.ThriftConstStruct(type=_fbthrift_metadata.ThriftStructType(name="cpp.Adapter"), fields= { "underlyingName": _fbthrift_metadata.ThriftConstValue(cv_string="BytePatchStruct"), "extraNamespace": _fbthrift_metadata.ThriftConstValue(cv_string=""), "name": _fbthrift_metadata.ThriftConstValue(cv_string="::apache::thrift::op::detail::NumberPatchAdapter"),  }),
        ])
    new_struct = metadata_struct(structs=struct_dict)

     # assign
     # clear
     # add

    return new_struct
def gen_metadata_struct_BytePatch() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_struct_BytePatch(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))

# TODO (ffrancet): This general pattern can be optimized by using tuples and dicts
# instead of re-generating thrift structs
def _fbthrift_gen_metadata_struct_I16Patch(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "patch.I16Patch"

    if qualified_name in metadata_struct.structs:
        return metadata_struct
    fields = [
        _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I16_TYPE), name="assign", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=2, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BOOL_TYPE), name="clear", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=8, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I16_TYPE), name="add", is_optional=False, structured_annotations=[
        ]),
    ]
    struct_dict = dict(metadata_struct.structs)
    struct_dict[qualified_name] = _fbthrift_metadata.ThriftStruct(name=qualified_name, fields=fields,
        is_union=False,
        structured_annotations=[
            _fbthrift_metadata.ThriftConstStruct(type=_fbthrift_metadata.ThriftStructType(name="cpp.Adapter"), fields= { "underlyingName": _fbthrift_metadata.ThriftConstValue(cv_string="I16PatchStruct"), "extraNamespace": _fbthrift_metadata.ThriftConstValue(cv_string=""), "name": _fbthrift_metadata.ThriftConstValue(cv_string="::apache::thrift::op::detail::NumberPatchAdapter"),  }),
        ])
    new_struct = metadata_struct(structs=struct_dict)

     # assign
     # clear
     # add

    return new_struct
def gen_metadata_struct_I16Patch() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_struct_I16Patch(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))

# TODO (ffrancet): This general pattern can be optimized by using tuples and dicts
# instead of re-generating thrift structs
def _fbthrift_gen_metadata_struct_I32Patch(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "patch.I32Patch"

    if qualified_name in metadata_struct.structs:
        return metadata_struct
    fields = [
        _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I32_TYPE), name="assign", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=2, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BOOL_TYPE), name="clear", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=8, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I32_TYPE), name="add", is_optional=False, structured_annotations=[
        ]),
    ]
    struct_dict = dict(metadata_struct.structs)
    struct_dict[qualified_name] = _fbthrift_metadata.ThriftStruct(name=qualified_name, fields=fields,
        is_union=False,
        structured_annotations=[
            _fbthrift_metadata.ThriftConstStruct(type=_fbthrift_metadata.ThriftStructType(name="cpp.Adapter"), fields= { "underlyingName": _fbthrift_metadata.ThriftConstValue(cv_string="I32PatchStruct"), "extraNamespace": _fbthrift_metadata.ThriftConstValue(cv_string=""), "name": _fbthrift_metadata.ThriftConstValue(cv_string="::apache::thrift::op::detail::NumberPatchAdapter"),  }),
        ])
    new_struct = metadata_struct(structs=struct_dict)

     # assign
     # clear
     # add

    return new_struct
def gen_metadata_struct_I32Patch() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_struct_I32Patch(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))

# TODO (ffrancet): This general pattern can be optimized by using tuples and dicts
# instead of re-generating thrift structs
def _fbthrift_gen_metadata_struct_I64Patch(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "patch.I64Patch"

    if qualified_name in metadata_struct.structs:
        return metadata_struct
    fields = [
        _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I64_TYPE), name="assign", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=2, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BOOL_TYPE), name="clear", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=8, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I64_TYPE), name="add", is_optional=False, structured_annotations=[
        ]),
    ]
    struct_dict = dict(metadata_struct.structs)
    struct_dict[qualified_name] = _fbthrift_metadata.ThriftStruct(name=qualified_name, fields=fields,
        is_union=False,
        structured_annotations=[
            _fbthrift_metadata.ThriftConstStruct(type=_fbthrift_metadata.ThriftStructType(name="cpp.Adapter"), fields= { "underlyingName": _fbthrift_metadata.ThriftConstValue(cv_string="I64PatchStruct"), "extraNamespace": _fbthrift_metadata.ThriftConstValue(cv_string=""), "name": _fbthrift_metadata.ThriftConstValue(cv_string="::apache::thrift::op::detail::NumberPatchAdapter"),  }),
        ])
    new_struct = metadata_struct(structs=struct_dict)

     # assign
     # clear
     # add

    return new_struct
def gen_metadata_struct_I64Patch() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_struct_I64Patch(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))

# TODO (ffrancet): This general pattern can be optimized by using tuples and dicts
# instead of re-generating thrift structs
def _fbthrift_gen_metadata_struct_FloatPatch(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "patch.FloatPatch"

    if qualified_name in metadata_struct.structs:
        return metadata_struct
    fields = [
        _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_DOUBLE_TYPE), name="assign", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=2, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BOOL_TYPE), name="clear", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=8, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_DOUBLE_TYPE), name="add", is_optional=False, structured_annotations=[
        ]),
    ]
    struct_dict = dict(metadata_struct.structs)
    struct_dict[qualified_name] = _fbthrift_metadata.ThriftStruct(name=qualified_name, fields=fields,
        is_union=False,
        structured_annotations=[
            _fbthrift_metadata.ThriftConstStruct(type=_fbthrift_metadata.ThriftStructType(name="cpp.Adapter"), fields= { "underlyingName": _fbthrift_metadata.ThriftConstValue(cv_string="FloatPatchStruct"), "extraNamespace": _fbthrift_metadata.ThriftConstValue(cv_string=""), "name": _fbthrift_metadata.ThriftConstValue(cv_string="::apache::thrift::op::detail::NumberPatchAdapter"),  }),
        ])
    new_struct = metadata_struct(structs=struct_dict)

     # assign
     # clear
     # add

    return new_struct
def gen_metadata_struct_FloatPatch() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_struct_FloatPatch(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))

# TODO (ffrancet): This general pattern can be optimized by using tuples and dicts
# instead of re-generating thrift structs
def _fbthrift_gen_metadata_struct_DoublePatch(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "patch.DoublePatch"

    if qualified_name in metadata_struct.structs:
        return metadata_struct
    fields = [
        _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_FLOAT_TYPE), name="assign", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=2, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BOOL_TYPE), name="clear", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=8, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_FLOAT_TYPE), name="add", is_optional=False, structured_annotations=[
        ]),
    ]
    struct_dict = dict(metadata_struct.structs)
    struct_dict[qualified_name] = _fbthrift_metadata.ThriftStruct(name=qualified_name, fields=fields,
        is_union=False,
        structured_annotations=[
            _fbthrift_metadata.ThriftConstStruct(type=_fbthrift_metadata.ThriftStructType(name="cpp.Adapter"), fields= { "underlyingName": _fbthrift_metadata.ThriftConstValue(cv_string="DoublePatchStruct"), "extraNamespace": _fbthrift_metadata.ThriftConstValue(cv_string=""), "name": _fbthrift_metadata.ThriftConstValue(cv_string="::apache::thrift::op::detail::NumberPatchAdapter"),  }),
        ])
    new_struct = metadata_struct(structs=struct_dict)

     # assign
     # clear
     # add

    return new_struct
def gen_metadata_struct_DoublePatch() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_struct_DoublePatch(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))

# TODO (ffrancet): This general pattern can be optimized by using tuples and dicts
# instead of re-generating thrift structs
def _fbthrift_gen_metadata_struct_StringPatch(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "patch.StringPatch"

    if qualified_name in metadata_struct.structs:
        return metadata_struct
    fields = [
        _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_STRING_TYPE), name="assign", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=2, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BOOL_TYPE), name="clear", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=8, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_STRING_TYPE), name="prepend", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=9, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_STRING_TYPE), name="append", is_optional=False, structured_annotations=[
        ]),
    ]
    struct_dict = dict(metadata_struct.structs)
    struct_dict[qualified_name] = _fbthrift_metadata.ThriftStruct(name=qualified_name, fields=fields,
        is_union=False,
        structured_annotations=[
            _fbthrift_metadata.ThriftConstStruct(type=_fbthrift_metadata.ThriftStructType(name="cpp.Adapter"), fields= { "underlyingName": _fbthrift_metadata.ThriftConstValue(cv_string="StringPatchStruct"), "extraNamespace": _fbthrift_metadata.ThriftConstValue(cv_string=""), "name": _fbthrift_metadata.ThriftConstValue(cv_string="::apache::thrift::op::detail::StringPatchAdapter"),  }),
        ])
    new_struct = metadata_struct(structs=struct_dict)

     # assign
     # clear
     # prepend
     # append

    return new_struct
def gen_metadata_struct_StringPatch() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_struct_StringPatch(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))

# TODO (ffrancet): This general pattern can be optimized by using tuples and dicts
# instead of re-generating thrift structs
def _fbthrift_gen_metadata_struct_BinaryPatch(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "patch.BinaryPatch"

    if qualified_name in metadata_struct.structs:
        return metadata_struct
    fields = [
        _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BINARY_TYPE), name="assign", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=2, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BOOL_TYPE), name="clear", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=8, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BINARY_TYPE), name="prepend", is_optional=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftField(id=9, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BINARY_TYPE), name="append", is_optional=False, structured_annotations=[
        ]),
    ]
    struct_dict = dict(metadata_struct.structs)
    struct_dict[qualified_name] = _fbthrift_metadata.ThriftStruct(name=qualified_name, fields=fields,
        is_union=False,
        structured_annotations=[
            _fbthrift_metadata.ThriftConstStruct(type=_fbthrift_metadata.ThriftStructType(name="cpp.Adapter"), fields= { "underlyingName": _fbthrift_metadata.ThriftConstValue(cv_string="BinaryPatchStruct"), "extraNamespace": _fbthrift_metadata.ThriftConstValue(cv_string=""), "name": _fbthrift_metadata.ThriftConstValue(cv_string="::apache::thrift::op::detail::BinaryPatchAdapter"),  }),
        ])
    new_struct = metadata_struct(structs=struct_dict)

     # assign
     # clear
     # prepend
     # append

    return new_struct
def gen_metadata_struct_BinaryPatch() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_struct_BinaryPatch(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))



def _fbthrift_gen_metadata_enum_PatchOp(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "patch.PatchOp"

    if qualified_name in metadata_struct.enums:
        return metadata_struct
    elements = {
        1: "Assign",
        2: "Clear",
        3: "Patch",
        4: "EnsureUnion",
        5: "EnsureStruct",
        6: "PatchAfter",
        7: "Remove",
        8: "Add",
        9: "Put",
        0: "Unspecified",
    }
    enum_dict = dict(metadata_struct.enums)
    enum_dict[qualified_name] = _fbthrift_metadata.ThriftEnum(name=qualified_name, elements=elements, structured_annotations=[])
    new_struct = metadata_struct(enums=enum_dict)

    return new_struct

def gen_metadata_enum_PatchOp() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_enum_PatchOp(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))

def getThriftModuleMetadata() -> _fbthrift_metadata.ThriftMetadata:
    meta = _fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={})
    meta = _fbthrift_gen_metadata_enum_PatchOp(meta)
    meta = _fbthrift_gen_metadata_struct_GeneratePatch(meta)
    meta = _fbthrift_gen_metadata_struct_BoolPatch(meta)
    meta = _fbthrift_gen_metadata_struct_BytePatch(meta)
    meta = _fbthrift_gen_metadata_struct_I16Patch(meta)
    meta = _fbthrift_gen_metadata_struct_I32Patch(meta)
    meta = _fbthrift_gen_metadata_struct_I64Patch(meta)
    meta = _fbthrift_gen_metadata_struct_FloatPatch(meta)
    meta = _fbthrift_gen_metadata_struct_DoublePatch(meta)
    meta = _fbthrift_gen_metadata_struct_StringPatch(meta)
    meta = _fbthrift_gen_metadata_struct_BinaryPatch(meta)
    return meta
