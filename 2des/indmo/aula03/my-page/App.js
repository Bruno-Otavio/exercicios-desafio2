import { StatusBar } from 'expo-status-bar';
import { StyleSheet, Text, View, Image } from 'react-native';

const colors = {
  black: "#2D3250",
  gray: "#424769",
  lightgray: "#7077A1",
  beige: "#F6B17A",
};

export default function App() {
  return (
    <View style={styles.container}>
      <StatusBar style="auto" />
      <View style={styles.headerContainer}>
        <Image 
          source={{uri: "./assets/milia-rage.png"}}
          style={styles.image}
        />
        <Text style={styles.name}><h1>Milia Rage</h1></Text>
      </View>
      <View>

      </View>
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: colors.gray,
    alignItems: 'center',
    justifyContent: 'center',
  },
  headerContainer: {
    backgroundColor: colors.black,
    borderRadius: 25,
    padding: 50,
  },
  image: {
    width: 200,
    height: 200,

    borderRadius: 100,
    borderWidth: 2,
    borderColor: colors.beige,
  },
  name: {
    color: colors.beige,
    marginRight: "auto",
    marginLeft: "auto",
  }
});
