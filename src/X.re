type visibility =
  | Shown
  | Hidden;

type fieldStatus('outputValue, 'message) =
  | Pristine
  | Dirty(result('outputValue, 'message), visibility);

include {
          [@ocaml.warning "-23-40-42"];
          type message = string;
          type fieldsStatuses = {
            iaasStorageConfigurations:
              array(iaasStorageConfigurationFieldsStatuses),
          }
          and iaasStorageConfigurationFieldsStatuses = {
            startDate: fieldStatus(Js.Date.t, message),
            term: fieldStatus(Js.Date.t, message),
            rawStorageCapacity: fieldStatus(int, message),
            diskType: fieldStatus(option(string), message),
            connectivityMethod: fieldStatus(option(string), message),
            getRequest: fieldStatus(option(int), message),
            getRequestUnit: fieldStatus(option(string), message),
            putRequest: fieldStatus(option(int), message),
            putRequestUnit: fieldStatus(option(string), message),
            transferOut: fieldStatus(option(int), message),
            transferOutUnit: fieldStatus(option(string), message),
            region: fieldStatus(option(string), message),
            cloudType: fieldStatus(option(string), message),
            description: fieldStatus(option(string), message),
            features: fieldStatus(array(string), message),
            accessTypes: fieldStatus(array(string), message),
            certifications: fieldStatus(array(string), message),
            additionalRequirements: fieldStatus(option(string), message),
          };
          type interface = {dirty: unit => bool};
          let useForm = () => {
            {
              dirty: () =>
                Belt.Array.every(
                  [||]: array(iaasStorageConfigurationFieldsStatuses), item =>
                  switch (item) {
                  | {
                      additionalRequirements: Pristine,
                      certifications: Pristine,
                      accessTypes: Pristine,
                      features: Pristine,
                      description: Pristine,
                      cloudType: Pristine,
                      region: Pristine,
                      transferOutUnit: Pristine,
                      transferOut: Pristine,
                      putRequestUnit: Pristine,
                      putRequest: Pristine,
                      getRequestUnit: Pristine,
                      getRequest: Pristine,
                      connectivityMethod: Pristine,
                      diskType: Pristine,
                      rawStorageCapacity: Pristine,
                      term: Pristine,
                      startDate: Pristine,
                    } =>
                    false
                  | {
                      additionalRequirements: Pristine | Dirty(_),
                      certifications: Pristine | Dirty(_),
                      accessTypes: Pristine | Dirty(_),
                      features: Pristine | Dirty(_),
                      description: Pristine | Dirty(_),
                      cloudType: Pristine | Dirty(_),
                      region: Pristine | Dirty(_),
                      transferOutUnit: Pristine | Dirty(_),
                      transferOut: Pristine | Dirty(_),
                      putRequestUnit: Pristine | Dirty(_),
                      putRequest: Pristine | Dirty(_),
                      getRequestUnit: Pristine | Dirty(_),
                      getRequest: Pristine | Dirty(_),
                      connectivityMethod: Pristine | Dirty(_),
                      diskType: Pristine | Dirty(_),
                      rawStorageCapacity: Pristine | Dirty(_),
                      term: Pristine | Dirty(_),
                      startDate: Pristine | Dirty(_),
                    } =>
                    true
                  }
                ),
            };
          };
        };
