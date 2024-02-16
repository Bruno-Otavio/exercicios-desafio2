import { StatusBar } from 'expo-status-bar';
import { StyleSheet, Text, View, Image, Switch } from 'react-native';
import { useState } from 'react';

const icon = require("./assets/cpfl-energia-logo-1.png");

export default function App() {
  const [ habilitado, sethabilitado ] = new useState(false);

  const habilitar = () => {
    sethabilitado(!habilitado);
  }

  return (
    <View style={styles.container}>
      <Image
        source={icon}
        style={styles.icon}
      />
      <Switch value={habilitado} onValueChange={habilitar}/>
      <Image source={{ uri: (habilitado) ? "./assets/lightbulbON.png" : "./assets/lightbulbOFF.png" }}
       style={styles.lampada}/>
      <StatusBar style="auto" />
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#fff',
    alignItems: 'center',
    justifyContent: 'center',
    gap: 32,
  },
  icon: {
    width: 150,
    height: 100,
  },
  lampada: {
    width: 200,
    height: 200,
  },
});
