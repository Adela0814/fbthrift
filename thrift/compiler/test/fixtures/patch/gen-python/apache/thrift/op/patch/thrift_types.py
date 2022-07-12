#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import enum

import folly.iobuf as _fbthrift_iobuf
import thrift.python.types as _fbthrift_python_types
import thrift.python.exceptions as _fbthrift_python_exceptions


import facebook.thrift.annotation.cpp.thrift_types

import facebook.thrift.annotation.scope.thrift_types

import facebook.thrift.annotation.thrift.thrift_types


class GeneratePatch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.GeneratePatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/GeneratePatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_GeneratePatch()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.GeneratePatch, self)

    def _to_py_deprecated(self):
        import importlib
        py_deprecated_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_deprecated_types.GeneratePatch, self)


class GenerateOptionalPatch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.GenerateOptionalPatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/GenerateOptionalPatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_GenerateOptionalPatch()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.GenerateOptionalPatch, self)

    def _to_py_deprecated(self):
        import importlib
        py_deprecated_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_deprecated_types.GenerateOptionalPatch, self)


class BoolPatch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "assign",  # name
            _fbthrift_python_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            9,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "invert",  # name
            _fbthrift_python_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.BoolPatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/BoolPatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_BoolPatch()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.BoolPatch, self)

    def _to_py_deprecated(self):
        import importlib
        py_deprecated_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_deprecated_types.BoolPatch, self)


class BytePatch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "assign",  # name
            _fbthrift_python_types.typeinfo_byte,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            8,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "add",  # name
            _fbthrift_python_types.typeinfo_byte,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.BytePatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/BytePatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_BytePatch()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.BytePatch, self)

    def _to_py_deprecated(self):
        import importlib
        py_deprecated_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_deprecated_types.BytePatch, self)


class I16Patch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "assign",  # name
            _fbthrift_python_types.typeinfo_i16,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            8,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "add",  # name
            _fbthrift_python_types.typeinfo_i16,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.I16Patch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/I16Patch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_I16Patch()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.I16Patch, self)

    def _to_py_deprecated(self):
        import importlib
        py_deprecated_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_deprecated_types.I16Patch, self)


class I32Patch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "assign",  # name
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            8,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "add",  # name
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.I32Patch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/I32Patch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_I32Patch()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.I32Patch, self)

    def _to_py_deprecated(self):
        import importlib
        py_deprecated_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_deprecated_types.I32Patch, self)


class I64Patch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "assign",  # name
            _fbthrift_python_types.typeinfo_i64,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            8,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "add",  # name
            _fbthrift_python_types.typeinfo_i64,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.I64Patch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/I64Patch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_I64Patch()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.I64Patch, self)

    def _to_py_deprecated(self):
        import importlib
        py_deprecated_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_deprecated_types.I64Patch, self)


class FloatPatch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "assign",  # name
            _fbthrift_python_types.typeinfo_float,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            8,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "add",  # name
            _fbthrift_python_types.typeinfo_float,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.FloatPatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/FloatPatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_FloatPatch()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.FloatPatch, self)

    def _to_py_deprecated(self):
        import importlib
        py_deprecated_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_deprecated_types.FloatPatch, self)


class DoublePatch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "assign",  # name
            _fbthrift_python_types.typeinfo_double,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            8,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "add",  # name
            _fbthrift_python_types.typeinfo_double,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.DoublePatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/DoublePatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_DoublePatch()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.DoublePatch, self)

    def _to_py_deprecated(self):
        import importlib
        py_deprecated_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_deprecated_types.DoublePatch, self)


class StringPatch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "assign",  # name
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "clear",  # name
            _fbthrift_python_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            9,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "append",  # name
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            10,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "prepend",  # name
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.StringPatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/StringPatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_StringPatch()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.StringPatch, self)

    def _to_py_deprecated(self):
        import importlib
        py_deprecated_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_deprecated_types.StringPatch, self)


class BinaryPatch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "assign",  # name
            _fbthrift_python_types.typeinfo_binary,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.BinaryPatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/BinaryPatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_BinaryPatch()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.BinaryPatch, self)

    def _to_py_deprecated(self):
        import importlib
        py_deprecated_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_deprecated_types.BinaryPatch, self)


class OptionalBoolPatch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "clear",  # name
            _fbthrift_python_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patch",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(BoolPatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "ensure",  # name
            _fbthrift_python_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            6,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patchAfter",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(BoolPatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.OptionalBoolPatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/OptionalBoolPatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_OptionalBoolPatch()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.OptionalBoolPatch, self)

    def _to_py_deprecated(self):
        import importlib
        py_deprecated_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_deprecated_types.OptionalBoolPatch, self)


class OptionalBytePatch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "clear",  # name
            _fbthrift_python_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patch",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(BytePatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "ensure",  # name
            _fbthrift_python_types.typeinfo_byte,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            6,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patchAfter",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(BytePatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.OptionalBytePatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/OptionalBytePatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_OptionalBytePatch()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.OptionalBytePatch, self)

    def _to_py_deprecated(self):
        import importlib
        py_deprecated_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_deprecated_types.OptionalBytePatch, self)


class OptionalI16Patch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "clear",  # name
            _fbthrift_python_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patch",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(I16Patch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "ensure",  # name
            _fbthrift_python_types.typeinfo_i16,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            6,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patchAfter",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(I16Patch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.OptionalI16Patch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/OptionalI16Patch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_OptionalI16Patch()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.OptionalI16Patch, self)

    def _to_py_deprecated(self):
        import importlib
        py_deprecated_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_deprecated_types.OptionalI16Patch, self)


class OptionalI32Patch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "clear",  # name
            _fbthrift_python_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patch",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(I32Patch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "ensure",  # name
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            6,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patchAfter",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(I32Patch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.OptionalI32Patch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/OptionalI32Patch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_OptionalI32Patch()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.OptionalI32Patch, self)

    def _to_py_deprecated(self):
        import importlib
        py_deprecated_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_deprecated_types.OptionalI32Patch, self)


class OptionalI64Patch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "clear",  # name
            _fbthrift_python_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patch",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(I64Patch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "ensure",  # name
            _fbthrift_python_types.typeinfo_i64,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            6,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patchAfter",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(I64Patch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.OptionalI64Patch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/OptionalI64Patch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_OptionalI64Patch()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.OptionalI64Patch, self)

    def _to_py_deprecated(self):
        import importlib
        py_deprecated_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_deprecated_types.OptionalI64Patch, self)


class OptionalFloatPatch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "clear",  # name
            _fbthrift_python_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patch",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(FloatPatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "ensure",  # name
            _fbthrift_python_types.typeinfo_float,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            6,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patchAfter",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(FloatPatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.OptionalFloatPatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/OptionalFloatPatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_OptionalFloatPatch()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.OptionalFloatPatch, self)

    def _to_py_deprecated(self):
        import importlib
        py_deprecated_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_deprecated_types.OptionalFloatPatch, self)


class OptionalDoublePatch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "clear",  # name
            _fbthrift_python_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patch",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(DoublePatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "ensure",  # name
            _fbthrift_python_types.typeinfo_double,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            6,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patchAfter",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(DoublePatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.OptionalDoublePatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/OptionalDoublePatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_OptionalDoublePatch()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.OptionalDoublePatch, self)

    def _to_py_deprecated(self):
        import importlib
        py_deprecated_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_deprecated_types.OptionalDoublePatch, self)


class OptionalStringPatch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "clear",  # name
            _fbthrift_python_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patch",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(StringPatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "ensure",  # name
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            6,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patchAfter",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(StringPatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.OptionalStringPatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/OptionalStringPatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_OptionalStringPatch()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.OptionalStringPatch, self)

    def _to_py_deprecated(self):
        import importlib
        py_deprecated_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_deprecated_types.OptionalStringPatch, self)


class OptionalBinaryPatch(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "clear",  # name
            _fbthrift_python_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patch",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(BinaryPatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "ensure",  # name
            _fbthrift_python_types.typeinfo_binary,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            6,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "patchAfter",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(BinaryPatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.OptionalBinaryPatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/OptionalBinaryPatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_OptionalBinaryPatch()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.op.patch.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.OptionalBinaryPatch, self)

    def _to_py_deprecated(self):
        import importlib
        py_deprecated_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_deprecated_types.OptionalBinaryPatch, self)

# This unfortunately has to be down here to prevent circular imports
import apache.thrift.op.patch.thrift_metadata

class PatchOp(_fbthrift_python_types.Enum, enum.Enum):
    Assign = 1
    Clear = 2
    Patch = 3
    Ensure = 4
    PatchAfter = 6
    Remove = 7
    Add = 8
    Put = 9
    Prepend = 10
    Unspecified = 0
    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.PatchOp"

    @staticmethod
    def __get_metadata__():
        return apache.thrift.op.patch.thrift_metadata.gen_metadata_enum_PatchOp()

def _fbthrift_metadata__struct_GeneratePatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_GeneratePatch()
def _fbthrift_metadata__struct_GenerateOptionalPatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_GenerateOptionalPatch()
def _fbthrift_metadata__struct_BoolPatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_BoolPatch()
def _fbthrift_metadata__struct_BytePatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_BytePatch()
def _fbthrift_metadata__struct_I16Patch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_I16Patch()
def _fbthrift_metadata__struct_I32Patch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_I32Patch()
def _fbthrift_metadata__struct_I64Patch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_I64Patch()
def _fbthrift_metadata__struct_FloatPatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_FloatPatch()
def _fbthrift_metadata__struct_DoublePatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_DoublePatch()
def _fbthrift_metadata__struct_StringPatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_StringPatch()
def _fbthrift_metadata__struct_BinaryPatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_BinaryPatch()
def _fbthrift_metadata__struct_OptionalBoolPatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_OptionalBoolPatch()
def _fbthrift_metadata__struct_OptionalBytePatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_OptionalBytePatch()
def _fbthrift_metadata__struct_OptionalI16Patch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_OptionalI16Patch()
def _fbthrift_metadata__struct_OptionalI32Patch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_OptionalI32Patch()
def _fbthrift_metadata__struct_OptionalI64Patch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_OptionalI64Patch()
def _fbthrift_metadata__struct_OptionalFloatPatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_OptionalFloatPatch()
def _fbthrift_metadata__struct_OptionalDoublePatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_OptionalDoublePatch()
def _fbthrift_metadata__struct_OptionalStringPatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_OptionalStringPatch()
def _fbthrift_metadata__struct_OptionalBinaryPatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_OptionalBinaryPatch()

_fbthrift_all_structs = [
    GeneratePatch,
    GenerateOptionalPatch,
    BoolPatch,
    BytePatch,
    I16Patch,
    I32Patch,
    I64Patch,
    FloatPatch,
    DoublePatch,
    StringPatch,
    BinaryPatch,
    OptionalBoolPatch,
    OptionalBytePatch,
    OptionalI16Patch,
    OptionalI32Patch,
    OptionalI64Patch,
    OptionalFloatPatch,
    OptionalDoublePatch,
    OptionalStringPatch,
    OptionalBinaryPatch,
]
_fbthrift_python_types.fill_specs(*_fbthrift_all_structs)
