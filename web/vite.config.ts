import { defineConfig } from 'vite'

export default defineConfig({
  publicDir: 'public',
  base: './',
  build: {
    outDir: 'dist',
    sourcemap: true
  },
  server: {
    port: 3000
  }
})

