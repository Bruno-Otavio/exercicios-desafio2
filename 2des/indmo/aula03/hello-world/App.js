import { StatusBar } from 'expo-status-bar';
import { StyleSheet, Text, View, Image, TextInput } from 'react-native';

export default function App() {
  return (
    <View style={styles.container}>
      <Text>Hello, World!</Text>
      <StatusBar style="auto" />
      <Image 
        source={{uri: "./assets/milia-rage.png"}} 
        style={styles.milia}
      />
      <Text>Milia is the best!</Text>
      <StatusBar style="auto"/>
      <View>
        <TextInput
         style={styles.message}
         defaultValue="Type some kind words to Milia!"
        />
        <Cat name="Jubileu"></Cat>
      </View>
    </View>
  );
}

const Cat = props => {
  return <View>
    <Text>Hello, I am a cat! 😺</Text>
    <Text>My name is {props.name}!</Text>
  </View>;
};

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#fff',
    alignItems: 'center',
    justifyContent: 'center',
  },
  milia: {
    width: 200,
    height: 200,
  },
  message: {
    width: 225,
    height: 40,
    borderColor: "gray",
    borderWidth: 1,
    padding: 10,
  },
});
